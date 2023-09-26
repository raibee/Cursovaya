#include "fern.h"
fern::fern( int  N ) :n(N) {}
void fern::create_fern() {
    V = new point[n*100];
    point g;
    point m;
    g.elemX() = 1.0;
    g.elemY() = 0.0;
    for (int i = 0; i < n*100; i++) {
        int p = rand() % (100 + 1);
        m.elemX() = g.elemX();
        if (p <= 85)//построение верхней части 
        {
            g.elemX() = 0.84 * g.elemX() - 0.045 * g.elemY();
            g.elemY() = 0.045 * m.elemX() + 0.86 * g.elemY() + 1.6;
        }
        else {
            if (p <= 92)//построение левого листа
            {
                g.elemX() = 0.25 * g.elemX() - 0.26 * g.elemY();
                g.elemY() = 0.23 * m.elemX() + 0.25 * g.elemY() + 1.6;
            }
            else {
                if (p <= 99)//построение правого листа 
                {
                    g.elemX() = -0.135 * g.elemX() + 0.28 * g.elemY();
                    g.elemY() = 0.26 * m.elemX() + 0.245 * g.elemY() + 0.44;
                }
                else//построение стебля 
                {
                    g.elemX() = 0.0;
                    g.elemY() = 0.16 * g.elemY();
                }
            }
        }
        V[i] = g;
    }
}
point& fern::Fag(int i) { return V[i]; }