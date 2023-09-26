#ifndef point_h
#define point_h
#include <iostream>
using namespace std;

class point {//����� �����
    double x, y;
public:
    point(double X = 0.0, double Y=0.0);//����������� ������ �����
    double& elemX();//����������� ���������� x, ��������� ��� �����������
    double& elemY();//����������� ���������� y, ��������� ��� �����������
    double& elemX1(double z);//����������� ���������� x, ��������� ��� ���������, ���������� �������
    double& elemY1(double z);//����������� ���������� y, ��������� ��� ���������, ���������� �������
    friend istream& operator>>(istream& in, point& A) { return in >> A.x >> A.y; }//��������� ����
    friend ostream& operator<<(ostream& out, point& A) { return out << '(' << A.x << ';' << A.y << ')'; }//��������� �����
};

#endif
