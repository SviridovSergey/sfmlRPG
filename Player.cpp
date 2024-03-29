#include "Player.h"

Player::Player(sf::Vector2f startPosition)
{
	texture.loadFromFile("./img/player.png");
	player.setTexture(&texture);
	player.setSize(sf::Vector2f(32, 32));
	player.setPosition(startPosition);

}

void Player::draw(sf::RenderWindow& window)
{
	window.draw(player);

}

void Player::move(int direction)
{
	//1 up 2 right 3 down 4 left
	switch (direction) {
	case 1:
		player.move(sf::Vector2f(0, -32));
		break;
	case 2:
		player.move(sf::Vector2f(32, 0));
		break;
	case 3:
		player.move(sf::Vector2f(0, 32));
		break;
	case 4:
		player.move(sf::Vector2f(-32, 0));
		break;
	}

}

sf::Vector2f Player::getPosition()
{
	return player.getPosition();
}