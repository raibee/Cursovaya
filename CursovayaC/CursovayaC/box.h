#pragma once
#include <SFML/Graphics.hpp>

class Box
{
	sf::RectangleShape box;
	double xx, yy;//����������
	int a,b;//������, ������
public:
	Box(double a,double b, double x1, double y1);//����������� ������
	void drawB(sf::RenderWindow& window);//��������� �������
	double getX();//��������� ���������� x
	double getY();//��������� ���������� y
	void moveb(sf::RenderWindow& window);//����������� �������
	void scale(double u,double v);//�������
	void drawB1(sf::RenderWindow& window);//��������� �������, �� � moveb1
	void moveb1(sf::RenderWindow& window);//����������� ������� ������ �� x
};