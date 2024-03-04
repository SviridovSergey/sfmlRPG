#include "SystemWindow.h"



SystemWindow::SystemWindow(sf::Vector2f startPosition)
{
	systemWindow.setSize(sf::Vector2f(400, 100));
	systemWindow.setPosition(startPosition);
	systemWindow.setFillColor(sf::Color(0, 0, 0, 50));
	fon.loadFromFile("./img/ariblk.ttf");
	text.setFont(fon);
	text.setPosition(systemWindow.getSize().x +8, 
		systemWindow.getPosition().y+
		systemWindow.getPosition().y /3);
}

void SystemWindow::draw(sf::RenderWindow& window)
{
	if (visible) {
		window.draw(systemWindow);
		window.draw(text);
	}
}

void SystemWindow::setVisible(bool flag)
{
	visible = flag;
}

void SystemWindow::setText(string text)
{
	this->text.setString(text);
}

bool SystemWindow::getVisible()
{
	return visible;
}
