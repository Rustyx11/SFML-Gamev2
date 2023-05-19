#include "key.h"

key::key()
{
	Key.setSize({ 40,40 });
}

void key::initTexture(std::string keyTexture)
{
	this->texture.loadFromFile(keyTexture);
	Key.setTexture(&texture);
}

void key::setPos(sf::Vector2f newPos)
{
	Key.setPosition(newPos);
}

sf::FloatRect key::getGlobalBounds()
{
	return Key.getGlobalBounds();
}

void key::DrawTo(sf::RenderWindow& window)
{
	window.draw(Key);
}

void key::setId(int Id)
{
	this->Id = Id;
}

int key::getId()
{
	return this->Id;
}
