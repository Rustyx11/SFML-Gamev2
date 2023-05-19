#include "ladder.h"

ladder::ladder()
{
	Ladder.setSize({ 40,40 });
	
}

void ladder::DrawTo(sf::RenderWindow& window)
{
	window.draw(Ladder);
}

void ladder::setPos(sf::Vector2f newPos)
{
	Ladder.setPosition(newPos);
}

sf::Vector2f ladder::getPos()
{
	return Ladder.getPosition();
}

sf::FloatRect ladder::getGlobalBounds()
{
	return Ladder.getGlobalBounds();
}

void ladder::initTexture(std::string ladderTexture)
{
	this->texture.loadFromFile(ladderTexture);
	Ladder.setTexture(&texture);
}
