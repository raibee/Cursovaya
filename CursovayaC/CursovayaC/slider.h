#pragma once
#include <SFML/Graphics.hpp>
#include <iostream>

class Slider
{
private:
	sf::RectangleShape slider;//������ ��������(�������������)
	sf::RectangleShape axis;//������ ���(�������������)
	sf::Font font;//�����
	sf::Text text;//�����
	int minValue;//����������� �������� ���
	int maxValue;//������������ �������� ���
	//���������� ��������
	int xCord;
	int yCord;
	int axisWidth;//������ ���
	int axisHeight;//������ ���
	int sliderWidth;//������ ��������
	int sliderHeight;//������ ��������
	double sliderValue;//�������� ��������
public:
	Slider(int x, int y, int h, int w);//����������� ������
	sf::Text returnText(int x, int y, std::string k, int fontSize);//������� ������
	void create(int min, int max);//������� ������������� � ������������ ��������
	void move(sf::RenderWindow& window);//����������� �������
	double getSliderValue();//��������� �������� �������
	int setSliderValue(double newValue);//������� ������-�� �������� �������
	void drawA(sf::RenderWindow& window);//��������� ��������
};