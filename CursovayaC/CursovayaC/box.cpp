#include "box.h"

Box::Box(double aa,double bb, double x1, double y1)
{
	a = aa;
	b = bb;
	xx = x1;
	yy = y1;
	box.setPosition(xx, yy);
	box.setSize(sf::Vector2f(a, b));
	box.setOrigin(a/2,b/2);
	box.setOutlineThickness(0);
	box.setFillColor(sf::Color::Transparent);
}

void Box::drawB(sf::RenderWindow& window){moveb(window);window.draw(box);}

void Box::drawB1(sf::RenderWindow& window) { moveb1(window); window.draw(box); }

double Box::getX() { return box.getPosition().x; }

double Box::getY() { return box.getPosition().y; }

void Box::moveb(sf::RenderWindow& window)
{
	if (box.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y)
		&& sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
	{
		if (sf::Mouse::getPosition(window).x >= xx || sf::Mouse::getPosition(window).x <= xx || 
			sf::Mouse::getPosition(window).y <= yy|| sf::Mouse::getPosition(window).y >= yy)
		{
			box.setPosition(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y);
		}
	}
}

void Box::moveb1(sf::RenderWindow& window)
{
	if (box.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y)
		&& sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
	{
		if (sf::Mouse::getPosition(window).x >= xx  || sf::Mouse::getPosition(window).x <= xx)	
		{
			box.setPosition(sf::Mouse::getPosition(window).x, yy);
		}
	}
}

void Box::scale(double u, double v)
{
	box.setSize(sf::Vector2f(a * u, b * v));
	box.setOrigin(u * (a / 2), v * (b / 2)+20);
}


