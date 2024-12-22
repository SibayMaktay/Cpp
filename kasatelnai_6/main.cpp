#include <iostream>
#include <cmath>
using namespace std;
float f(float x)
{
    return pow( x, 2) - sin(5) * x;
}
float fp(float x)
{
    return 2 * x - sin(5);
}
int main()
{
    float eps = 0.00001, c = 0.5;
    while( fabs( f( c)) > eps)
    {
        c = c - f( c) / fp( c);
    }
    cout << c << " " << f( c) <<endl;
    return 0;
}
