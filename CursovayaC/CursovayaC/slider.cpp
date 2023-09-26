#include "slider.h"

Slider::Slider(int x, int y, int h, int w)
{
	xCord = x;
	yCord = y;
	axisHeight = h;
	axisWidth = w;
	sliderWidth = 20;
	sliderHeight = 30;

	font.loadFromFile("C:\\Users\\user\\Desktop\\times-new-roman.ttf");

	text.setFont(font);
	text.setFillColor(sf::Color::White);

	axis.setPosition(x, y);
	axis.setOrigin(0, axisHeight / 2);//«адание точки прив€зки относительно которой происход€т трансформации
	axis.setSize(sf::Vector2f(axisWidth, axisHeight));
	axis.setFillColor(sf::Color::White);
	slider.setPosition(x, y);
	slider.setOrigin(sliderWidth / 2, sliderHeight / 2);
	slider.setSize(sf::Vector2f(sliderWidth, sliderHeight));
	slider.setFillColor(sf::Color::Magenta);

}

sf::Text Slider::returnText(int x, int y, std::string k, int fontSize)
{
	text.setCharacterSize(fontSize);
	text.setPosition(x, y);
	text.setString(k);
	return	text;
}

void Slider::create(int min, int max)
{
	sliderValue = min;
	minValue = min;
	maxValue = max;
}

void Slider::move(sf::RenderWindow& window)
{
	if (slider.getGlobalBounds().contains(sf::Mouse::getPosition(window).x, sf::Mouse::getPosition(window).y)
		&& sf::Mouse::isButtonPressed(sf::Mouse::Button::Left))
	{
		if (sf::Mouse::getPosition(window).x >= xCord && sf::Mouse::getPosition(window).x <= xCord + axisWidth)
		{
			slider.setPosition(sf::Mouse::getPosition(window).x, yCord);
			sliderValue = (minValue + ((slider.getPosition().x - xCord) / axisWidth * (maxValue - minValue)));
		}
	}
}

double Slider::getSliderValue()
{
	return sliderValue;
}

int Slider::setSliderValue(double newValue)
{
	if (newValue >= minValue && newValue <= maxValue)
	{
		sliderValue = newValue;
		double dif = maxValue - minValue;
		double dif2 = newValue - minValue;
		double width = axisWidth / dif;//Ўирина одного делени€
		double posX = width * dif2;//”становка нового значени€
		posX += xCord;
		slider.setPosition(posX, yCord);
	}
	return sliderValue;
}

void Slider::drawA(sf::RenderWindow& window)
{
	move(window);
	window.draw(returnText(xCord - 10, yCord + 5, std::to_string(minValue), 20));
	window.draw(axis);
	window.draw(returnText(xCord + axisWidth - 10, yCord + 5, std::to_string(maxValue), 20));
	window.draw(slider);
	window.draw(returnText(slider.getPosition().x - sliderWidth, slider.getPosition().y - sliderHeight, std::to_string((int)sliderValue), 15));
	//to_string - преобразование целого числа в строку
}