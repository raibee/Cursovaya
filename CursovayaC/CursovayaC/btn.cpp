#include "btn.h"

Button::Button(std::string t, sf::Vector2f size, int textSize, sf::Color backgroundColor, sf::Color textColor)
{
	text.setString(t);
	text.setCharacterSize(textSize);
	text.setFillColor(textColor);
	button.setSize(size);
	button.setFillColor(backgroundColor);
}

void Button::setFont(sf::Font& font)
{
	text.setFont(font);
}

void Button::setStr(std::string b)
{
	text.setString(b);
}

void  Button::setButtonColor(sf::Color color)//����� ������� ����� ������
{
	button.setFillColor(color);
}

sf::Color Button::getColor()//����� ��������� ����� ������
{
	sf::Color c = button.getFillColor();
	return c;
}

void Button::setTextColor(sf::Color color)//����� ������� ����� ������
{
	text.setFillColor(color);
}

void Button::setPosition(sf::Vector2f pos)//����� ������� ������� ������ � ������
{
	button.setPosition(pos);

	float xPos = (pos.x + button.getLocalBounds().width / 2) - (text.getLocalBounds().width / 2);
	float yPos = (pos.y + button.getLocalBounds().height / 2) - (text.getLocalBounds().height / 2);

	text.setPosition({ xPos,yPos });
}

void Button::drawc(sf::RenderWindow& window)//����� ��������� ������ � ������
{
	window.draw(button);
	window.draw(text);
}

bool Button::isMouseOver(sf::RenderWindow& window)//����� �������� ������� ����� ������ ������
{
	float mouseX = sf::Mouse::getPosition(window).x;
	float mouseY = sf::Mouse::getPosition(window).y;

	float butPosX = button.getPosition().x;
	float butPosY = button.getPosition().y;

	float butPosWidth = button.getPosition().x + button.getLocalBounds().width;
	float butPosHeight = button.getPosition().y + button.getLocalBounds().height;

	if (mouseX< butPosWidth && mouseX>butPosX && mouseY< butPosHeight && mouseY>butPosY)
	{
		return true;
	}
	return false;
}