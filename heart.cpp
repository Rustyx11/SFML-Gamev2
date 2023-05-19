#include "heart.h"

heart::heart()
{
	Heart.setSize({ 40,40 });
}

void heart::DrawTo(sf::RenderWindow& window)
{
	window.draw(Heart);
}

void heart::initTexture(std::string heartTexture)
{
	this->texture.loadFromFile(heartTexture);
	Heart.setTexture(&texture);
}

void heart::setPos(sf::Vector2f newPos)
{
	Heart.setPosition(newPos);
}
