#include "enemy.h"

enemy::enemy(sf::Vector2f size)
{
	Enemy.setSize(size);
}

void enemy::DrawTo(sf::RenderWindow& window)
{
	window.draw(Enemy);
}

void enemy::setPos(sf::Vector2f newPos)
{
	Enemy.setPosition(newPos);
}

void enemy::move(sf::Vector2f distance)
{
	Enemy.move(distance);
}

void enemy::movement()
{

	if (Enemy.getPosition().x > finish.x || Enemy.getPosition().y > finish.y)
	{
		direction = false;
	}
	else if (Enemy.getPosition().x < start.x || Enemy.getPosition().y < start.y)
	{
		direction = true;
	}

	if (direction)
	{
		Enemy.move(-this->trajectory);
	}
	else
	{
		Enemy.move(this->trajectory);
	}
	
	
}

sf::Vector2f enemy::getPos()
{
	return Enemy.getPosition();
}

sf::FloatRect enemy::getGlobalBounds()
{
	return Enemy.getGlobalBounds();
}

void enemy::movementInit(sf::Vector2f finish, float speed)
{
	this->start = Enemy.getPosition();
	this->finish = finish;

	float deltaX = start.x - finish.x;
	float deltaY = start.y - finish.y;

	float speedX = deltaX / speed;
	float speedY = deltaY / speed;

	this->trajectory = { speedX,speedY };

}

void enemy::initTexture(std::string enemyTexture)
{
	this->texture.loadFromFile(enemyTexture);
	texture.setRepeated(true);
	Enemy.setTexture(&texture);
}

void enemy::animationTexture(sf::IntRect texture)
{
	Enemy.setTextureRect(texture);
}

sf::Texture* enemy::getTexture()
{
	return &texture;
}

bool enemy::getDirection()
{
	return this->direction;
}
