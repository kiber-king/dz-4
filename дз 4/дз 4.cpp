#include <iostream>
#include <math.h>
using namespace std;
int main()
{
    double a = 3.5;
    double x = -0.7;
    double y = 0;
    double t = 0;

    if (a <= x) {
        y=a + log(x + a);
    }
    else if (a>x){
        if(a*x>=0){
            y =sqrt(abs(sin(a * x)));
        }
        else if (a * x < 0) {
            cout << "Err";
            return 0;
        }
    }

    if (a > y) {
        t = y /(a-x);
    }
    else if (a == y) {
        t = y/(a-x) + (a+x)/pow(y,2);
    }
    else if (a < y) {
        t = tan(a * x) + cos(2*a*y);
    }
    cout << "a: " << a << "\n" << "x: " << x << "\n" << "y: " << y << "\n"
        << "t: " << t << "\n";
}

