#include "julia.h"

julia::julia(int I , int n):iter(I),X(n*175),Y(n*150),Mix((n)*-1.5),Max((n)*1.5),Miy((n)*-1.5),May((n)*1.5),FJ(NULL)
{
     complex C(-0.74543, 0.11301); G = C;
}
int& julia::create_julia() {
    int x = 0, y = 0, size=0;
    int i;
    double ddx = (Max - Mix) / X;
    double ddy = (May - Miy) / Y;
    double g = (1 + 4 * sqrt(1 + G.abs())) / 2;
    for (y = -Y; y < Y; y++)
        for (x = -X; x < X; x++) //поточечно вывоодим рисунок
        {
            i = 0;
            Z.elemR() = Mix + x * ddx; Z.elemI() = Miy + y * ddy; //Преобразование экранных координат в комплексные
            while( Z.abs() < g && i < iter) {
                Z = G.plus(Z.multi(Z));//Z(n+1) = Z(n)^2 + C
                i++;
                //cout << i<<endl;
            } //Итерационный процесс проверки на принадлежность точки множеству Жулиа
            //cout << i << endl;
            point_julia(size,i,x,y);
            //cout << i<< endl;
        }
    return size;
}
void julia::point_julia(int &size,int i,int x,int y) {
        if (i >= iter) {          
            size++;
            point* temp;
            point* T;
            //cout << size << endl;
            temp = new point[size];
            for (int j = 0; j < size; j++) {
                if (j == size - 1) {
                    temp[j].elemX() = x;
                    temp[j].elemY() = y;
                }
                else
                    temp[j] = FJ[j];
            }
            T = FJ;
            delete[] FJ;
            FJ = T;
            FJ = temp;
        }

        //cout << size;
    }

point& julia::Emt(int i) { return FJ[i]; }