#ifndef funkoh_h
#define funkoh_h

void koh_curve(point* A1, point* A2, point* A3, point* a, int h);//Функция вычисления точек
void koh(point& A, point& B, point* a, int n);// задает начальную и конечную точку изгиба(A, B) стороны и задает длину массива точек изгиба(для одной)
void koh_sn(point* a, int n, int l);//Функция, заполнения точек

#endif
