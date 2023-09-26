#pragma once
#include <SFML/Graphics.hpp>

class Box
{
	sf::RectangleShape box;
	double xx, yy;//Координаты
	int a,b;//Высота, ширина
public:
	Box(double a,double b, double x1, double y1);//Конструктор класса
	void drawB(sf::RenderWindow& window);//Рисование объекта
	double getX();//Получение координаты x
	double getY();//Получение координаты y
	void moveb(sf::RenderWindow& window);//Перемещение обводки
	void scale(double u,double v);//Масштаб
	void drawB1(sf::RenderWindow& window);//Рисование объекта, но с moveb1
	void moveb1(sf::RenderWindow& window);//Перемещение объекта только по x
};