#pragma once
#include "point.h"
#include "complex.h"
class julia {
	int iter;
	point* FJ;
	float X, Y, Mix, Max, Miy, May;
	complex Z, G;
public:
	julia(int I = 20, int n = 1);//Конструктор класса
	int& create_julia();//Создание фрактала
	void point_julia(int &size, int i, int x, int y);//Расчёт точек
	point& Emt(int i);//Ссылка на i элемент массива точек фрактала
};