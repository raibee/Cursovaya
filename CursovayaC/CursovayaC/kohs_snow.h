#ifndef kohs_snow_h
#define kohs_snow_h

//����� �������� ����
class kohs_snow 
{
private:
    point A, B, C;
public:
    kohs_snow(double X1 = 0.0, double Y1 = 1.0, double X2 = 0.7, double Y2 = 0.0, double X3 = -0.7, double Y3 = 0.0);//������������ ������
    //void move_to(double t);//����� ����������� 
    //friend istream& operator >>(istream& in, kohs_snow& f) { in >> f.A >> f.B >> f.C; return in; }//���������� �����
    //friend ostream& operator <<(ostream& out, kohs_snow& f) { out << f.A << ' ' << f.B << ' ' << f.C; return out; }//����������� ������
    void snow(point** a, int n);//����� �������� ��������
};

#endif
