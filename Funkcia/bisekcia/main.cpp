#include <iostream>
#include <cmath>

using namespace std;

float f( float x)
{
    return x - cos( x);
}

int main()
{
    float a = 0.6, b = 0.8, eps = 0.001, c;
    while( abs( b - a) > eps)
    {
        c =( a + b) / 2;
        if( f( a) * f( c) < 0)
            b = c;
        else a = c;
    }
    cout << c << endl;
    return 0;
}
