#include "complex.h"

    complex::complex(double re, double im) :Re(re), Im(im) {}
    complex& complex::multi(complex A) {
        complex C;
        C.Re = this->Re * A.Re - this->Im * A.Im;
        C.Im = this->Re * A.Im + this->Im * A.Re;
        return C;
    }
    complex& complex::plus(complex A) {
        complex C;
        C.Re = this->Re + A.Re;
        C.Im = this->Im + A.Im;
        return C;
    }
    double& complex::abs() { double J = Re * Re + Im * Im; return J; }

    double& complex::elemR() { return Re; }
    double& complex::elemI() { return Im; }

    //friend istream& operator>>(istream& s, complex& X) { return s >> X.Re >> X.Im; }
    //friend ostream& operator<<(ostream& s, complex& X) { return s << X.Re << '+' << X.Im << "*i"; }
