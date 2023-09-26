#ifndef point_h
#define point_h
#include <iostream>
using namespace std;

class point {//Класс точка
    double x, y;
public:
    point(double X = 0.0, double Y=0.0);//Конструктор класса точка
    double& elemX();//Вытаскивает координату x, необходим при вычислениях
    double& elemY();//Вытаскивает координату y, необходим при вычислениях
    double& elemX1(double z);//Вытаскивает координату x, необходим для рисования, увеличивая масштаб
    double& elemY1(double z);//Вытаскивает координату y, необходим для рисования, увеличивая масштаб
    friend istream& operator>>(istream& in, point& A) { return in >> A.x >> A.y; }//Потоковый ввод
    friend ostream& operator<<(ostream& out, point& A) { return out << '(' << A.x << ';' << A.y << ')'; }//Потоковый вывод
};

#endif
