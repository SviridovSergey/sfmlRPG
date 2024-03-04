#include "Poison.h"

Poison::Poison(sf::Vector2f startPosition):
	Item(startPosition)
{
	texture.loadFromFile("./img/poison.png");
	item.setTexture(&texture);
}

sf::Texture Poison::texture;