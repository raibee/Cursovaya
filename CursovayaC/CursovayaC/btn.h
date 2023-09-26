#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class Button//Класс кнопка
{
private:
	sf::RectangleShape button;//Рамка кнопки
	sf::Text text;//Текст внутри кнопки
public:

	Button(std::string t, sf::Vector2f size, int textSize, sf::Color backgroundColor, sf::Color textColor);//Констуктор класса
	
	void setFont(sf::Font& font);//Метод задания шрифта
	

	void setStr(std::string b);//Метод задания текста
	

	void  setButtonColor(sf::Color color);//Метод задания цвета кнопке

	sf::Color getColor();//Метод получения цвета кнопки
	
	void setTextColor(sf::Color color);//Метод задания цвета тексту

	void setPosition(sf::Vector2f pos);//Метод задания позиции текста и кнопки
	
	void drawc(sf::RenderWindow& window);//Метод рисования кнопки и текста

	bool isMouseOver(sf::RenderWindow& window);//Метод проверки наличия мышки внутри кнопки

};



