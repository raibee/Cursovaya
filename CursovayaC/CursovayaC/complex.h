#pragma once

class complex {
    double Re, Im;
public:
    complex(double re = 0.0, double im = 0.0);//Конструктор класса
    complex& multi(complex A);//Умножение 
    complex& plus(complex A);//Сложение
    double& abs();//Модуль
    double& elemR();//Получение реальной части
    double& elemI();//Получение мнимой части

    //friend istream& operator>>(istream& s, complex& X) { return s >> X.Re >> X.Im; }
    //friend ostream& operator<<(ostream& s, complex& X) { return s << X.Re << '+' << X.Im << "*i"; }
};

