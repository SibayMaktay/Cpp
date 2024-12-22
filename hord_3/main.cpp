#include <iostream>
#include <cmath>
using namespace std;
float f(float x)
{
    return pow( x, 3) - (2 * pow( x, 2)) + x - 3;
}
float fp(float x)
{
    return 3 * pow( x, 2) - 4 * x + 1;
}

int main()
{
    float eps = 0.00001, c = 1/3, n = 0;

    while( fabs( f( c)) > eps)
    {
        c = c - f( c) / fp( c);
        cout << c << " " << f( c) << endl;
        n ++;
    }
    cout << c << " " << n << endl;
    return 0;
}
