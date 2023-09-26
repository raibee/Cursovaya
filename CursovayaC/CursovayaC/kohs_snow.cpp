#include "point.h"
#include "kohs_snow.h"
#include <math.h>
#include "funkoh.h"

kohs_snow::kohs_snow(double X1, double Y1, double X2, double Y2, double X3, double Y3) : A(X1, Y1), B(X2, Y2), C(X3, Y3){}
//void kohs_snow::move_to(double t){}
void kohs_snow::snow(point** a, int n) //создание снежинки Коха(для всех сторон)
{ 
    int k = 0;//Длина массива точек снежинки
    k = pow(4, n) + 1;
    for (int i = 0; i < 3; i++)
        a[i] = new point[k];
    koh(A, B, a[0], n);
    koh(B, C, a[1], n);
    koh(C, A, a[2], n);
}

