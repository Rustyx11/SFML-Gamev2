#include "player.h"

player::~player()
{
}

player::player()
{
	Player.setSize({ 40,40 });
}

void player::DrawTo(sf::RenderWindow& window)
{
	window.draw(Player);
}

void player::setPos(sf::Vector2f newPos)
{
	Player.setPosition(newPos);
}

void player::move(sf::Vector2f distance)
{
	Player.move(distance);
}

sf::Vector2f player::getPos()
{
	return Player.getPosition();
}

sf::FloatRect player::getGlobalBounds()
{
	return Player.getGlobalBounds();
}

void player::addKey()
{
	this->keys++;
}

void player::resetKey()
{
	this->keys = 0;
}

int player::getKey()
{
	return this->keys;
}

void player::setLifes(int amount)
{
	this->lifes = amount;
}


void player::minusLife()
{
	this->lifes--;
}

int player::getLifes()
{
	return this->lifes;
}

void player::initTexture(std::string playerTexture)
{
	this->texture.loadFromFile(playerTexture);
	texture.setRepeated(true);
	Player.setTexture(&texture);
}

void player::animationTexture(sf::IntRect texture)
{
	Player.setTextureRect(texture);
}

void player::addLife()
{
	this->lifes++;
}





