#include "point.h"

point::point(double X, double Y):x(X), y(Y){}
double& point::elemX() { return x; }
double& point::elemY() { return y; }
double& point::elemX1(double z) { x =x*z* 100; return x; }
double& point::elemY1(double z) { y =y*z* 100; return y; }

