#pragma once
#include "point.h"
#include "complex.h"
class julia {
	int iter;
	point* FJ;
	float X, Y, Mix, Max, Miy, May;
	complex Z, G;
public:
	julia(int I = 20, int n = 1);//����������� ������
	int& create_julia();//�������� ��������
	void point_julia(int &size, int i, int x, int y);//������ �����
	point& Emt(int i);//������ �� i ������� ������� ����� ��������
};