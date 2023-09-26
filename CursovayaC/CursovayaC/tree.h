#ifndef tree_h
#define tree_h
#include "point.h"
#include "globals.h"

class tree //Класс дерево
{
	int n; point** derevo; point P; double beta, alpha;
public:
	tree(point p=0.0, int N = 1, double Alpha=pi, double Beta=pi/4);//Конструктор класса
	void create_derevo(double v);//Создание дерева
	void count_point(int t, int i, point P, double &alpha, double beta, double v);//Расчёт точек дерева
	point& ElemD(int r, int c);// Возврат ссылки на элемент матрицы дерево
};

#endif
