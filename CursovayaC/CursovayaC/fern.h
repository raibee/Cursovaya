#pragma once
#include "point.h"
class fern
{
	int n;
	point M;
	point* V;
public:
	fern( int  N = 4);//����������� �����
	void create_fern();//�������� ��������
	point& Fag(int i);//������ �� i-�� ������� ������� �����
};