#pragma once

class complex {
    double Re, Im;
public:
    complex(double re = 0.0, double im = 0.0);//����������� ������
    complex& multi(complex A);//��������� 
    complex& plus(complex A);//��������
    double& abs();//������
    double& elemR();//��������� �������� �����
    double& elemI();//��������� ������ �����

    //friend istream& operator>>(istream& s, complex& X) { return s >> X.Re >> X.Im; }
    //friend ostream& operator<<(ostream& s, complex& X) { return s << X.Re << '+' << X.Im << "*i"; }
};

