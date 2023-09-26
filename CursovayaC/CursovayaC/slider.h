#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class Slider
{
private:
	sf::RectangleShape slider;//Фигура ползунок(Прямоугольник)
	sf::RectangleShape axis;//Фигура ось(Прямоугольник)
	sf::Font font;//Шрифт
	sf::Text text;//Текст
	int minValue;//Минимальное значение оси
	int maxValue;//Максимальное значение оси
	//Координаты слайдера
	int xCord;
	int yCord;
	int axisWidth;//Ширина оси
	int axisHeight;//Высота оси
	int sliderWidth;//Ширина ползунка
	int sliderHeight;//Высота ползунка
	double sliderValue;//Значение ползунка
public:
	Slider(int x, int y, int h, int w);//Конструктор класса
	sf::Text returnText(int x, int y, std::string k, int fontSize);//Задание текста
	void create(int min, int max);//Задание максимального и минимального значения
	void move(sf::RenderWindow& window);//Перемещение позунка
	double getSliderValue();//Получение значения позунка
	int setSliderValue(double newValue);//Задание какого-то значения позунка
	void drawA(sf::RenderWindow& window);//Рисование слайдера
};