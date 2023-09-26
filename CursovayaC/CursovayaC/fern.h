#pragma once
#include "point.h"
class fern
{
	int n;
	point M;
	point* V;
public:
	fern( int  N = 4);//Конструктор класа
	void create_fern();//Алгоритм создания
	point& Fag(int i);//Ссылка на i-ый элемент массива точек
};