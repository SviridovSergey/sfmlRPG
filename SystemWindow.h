#pragma once
#include <iostream>
#include <SFML/Graphics.hpp>
#include <vector>
#include "Item.h"
#include <thread>
#include <chrono>
using namespace std;

class SystemWindow
{
	sf::Font fon;
	sf::Text text;
	sf::RectangleShape systemWindow;
	bool visible = false;
	
public:
	SystemWindow() {};
	SystemWindow(sf::Vector2f startPosition);
	void draw(sf::RenderWindow&);
	void setVisible(bool flag);
	void setText(string text);
	bool getVisible();
};
