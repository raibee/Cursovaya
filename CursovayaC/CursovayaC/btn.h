#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class Button//����� ������
{
private:
	sf::RectangleShape button;//����� ������
	sf::Text text;//����� ������ ������
public:

	Button(std::string t, sf::Vector2f size, int textSize, sf::Color backgroundColor, sf::Color textColor);//���������� ������
	
	void setFont(sf::Font& font);//����� ������� ������
	

	void setStr(std::string b);//����� ������� ������
	

	void  setButtonColor(sf::Color color);//����� ������� ����� ������

	sf::Color getColor();//����� ��������� ����� ������
	
	void setTextColor(sf::Color color);//����� ������� ����� ������

	void setPosition(sf::Vector2f pos);//����� ������� ������� ������ � ������
	
	void drawc(sf::RenderWindow& window);//����� ��������� ������ � ������

	bool isMouseOver(sf::RenderWindow& window);//����� �������� ������� ����� ������ ������

};



