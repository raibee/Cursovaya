#include "point.h"
#include "funkoh.h"
#include "globals.h"
#include <math.h>

void koh_sn(point* a, int n, int l) //Функция, заполнения точек
{    
    int p;
    h = pow(4, (n - 1));//h - длина рассматриваемого участка
    p = pow(4, (n - 1));//p - временная длина участка
    koh_curve((a + h), (a + h * 2), (a + h * 3), a, l);
    //cout«"QW:"«*(a+h)«';'«(a+h)«' '«*(a+h*2)«';'«(a+h*2)«' '«*(a+h*3)«';'«(a+h*3)«endl;
    if (n != 1)//Условие выхода из рекурсии
        for (int i = 0; i <= 3; i++)
            koh_sn((a + p * i), n - 1, p);
}

void koh_curve(point* A1, point* A2, point* A3, point* a, int h) //Функция вычисления точек
{
    A1->elemX() = (2 * (a->elemX()) + ((a + h)->elemX())) / 3; A1->elemY() = (2 * (a->elemY()) + ((a + h)->elemY())) / 3;
    A3->elemX() = (2 * (a + h)->elemX() + (a)->elemX()) / 3; A3->elemY() = (2 * (a + h)->elemY() + (a)->elemY()) / 3;
    A2->elemX() = ((a)->elemX() + (a + h)->elemX()) / 2 + ((a)->elemY() - (a + h)->elemY()) / (2 * sqrt(3));
    A2->elemY() = ((a)->elemY() + (a + h)->elemY()) / 2 + ((a + h)->elemX() - (a)->elemX()) / (2 * sqrt(3));
}

void koh(point& A, point& B, point* a, int n) //задает начальную и конечную точку изгиба(A, B) стороны и задает длину массива точек изгиба(для одной)
{
    int k = pow(4, n) + 1;
    a[0] = A;
    a[k - 1] = B;
    koh_sn(a, n, k - 1);
}