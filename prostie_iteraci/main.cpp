#include <iostream>
#include <cmath>
using namespace std;
float f(float x)
{
    return x - cos(x);
}
int main()
{
    float a, eps = 0.001, c = 0.5, n = 0;
    do
    {
        a = c;
        c = f(c);
        n ++;
    }
    while (abs(c - a) > eps);
    cout << c << " " << n << endl;
    return 0;
}
