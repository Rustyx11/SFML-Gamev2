#include "escape.h"

escape::escape()
{
	Escape.setSize({ 40,40 });
}

void escape::initTexture(std::string escapeTexture)
{
	this->texture.loadFromFile(escapeTexture);
	Escape.setTexture(&texture);
}

void escape::setPos(sf::Vector2f newPos)
{
	Escape.setPosition(newPos);
}

sf::FloatRect escape::getGlobalBounds()
{
	return Escape.getGlobalBounds();
}

void escape::DrawTo(sf::RenderWindow& window)
{
	window.draw(Escape);
}
