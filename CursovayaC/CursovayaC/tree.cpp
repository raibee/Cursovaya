#include "tree.h"
#include "point.h"
#include <math.h>

tree::tree( point p, int N, double Alpha, double Beta):n(N),alpha(Alpha),beta(Beta), P(p)  
{
	int k = int(pow(2, n + 1));
	derevo = new  point * [k];//�������� ������� ������
	for (int i = 0; i < k; i++)
		derevo[i] = new point[n];
}

void tree::create_derevo(double v) 
{
    int k = int(pow(2, n + 1));
    for (int i = 0; i < n; i++)// ����������� ����� ������� (����������� ������� ������� �����, ���� ���������� �����)
        for (int t = 0; t < k; t++)
        {
            double alpha1;
            alpha1 = alpha;
            if (i == 0)
            {
                P.elemX() = 0.0;
                P.elemY() = 0.0;
            }
            else {
                P = derevo[t][i - 1];
                int b;
                b = i - 1;
                while (b >= 0) {
                    int q;
                    q = t / int(pow(2, n - i + b));
                    alpha1 += (pow((-1), q) * beta);
                    b--;
                }
            }
            count_point(t, i, P, alpha1, beta,v);//������� �����
        }
}
    void tree::count_point(int t, int i, point P, double &alpha, double beta,double v)
    {

        //����������� ����������� ����� ��� ������ ��������(���� ������� 1-, �� ������, ���� �������� 0 -�����)
        if ((t / int(pow(2, n - i - 1))) % 2) {

            derevo[t][i].elemX() = P.elemX() + 2*v*cos(alpha - beta) / int(pow(2, i + 1));
            derevo[t][i].elemY() = P.elemY() + 2*v*sin(alpha - beta) / int(pow(2, i + 1));
        }
        else
        {
            derevo[t][i].elemX() = P.elemX() + 2*v*cos(alpha + beta) / int(pow(2, i + 1));
            derevo[t][i].elemY() = P.elemY() + 2*v*sin(alpha + beta) / int(pow(2, i + 1));


        }
        //alpha = pi / 2;//������� � ��������� ���� ����������� ������
    }
point& tree::ElemD(int r, int c) { return derevo[r][c]; }
