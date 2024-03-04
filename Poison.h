#pragma once
#include <iostream>
#include "Item.h"
using namespace std;
class Poison:public Item
{
private:
	static sf::Texture texture;

public:
	Poison(sf::Vector2f startPosition);
};

