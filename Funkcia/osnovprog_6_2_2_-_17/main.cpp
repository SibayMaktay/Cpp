#include <iostream>
#include <cmath>

using namespace std;

float f1( float x)
{
    return 1.2 * (x * x) - (3 * x) - 9;
}

float f2( float x)
{
    return (12.1 / (2 * (x * x) + 1)) - 3;
}

int main()
{
    float a = 0, b = 5, d = -5, eps = 0.001, c, y = b;
    for( int s = 0; s <= 1; s ++)
    {
        while( abs( y - a) > eps)
        {
            c =( a + y) / 2;
            if( f1( a) * f1( c) < 0)
                y = c;
            else a = c;
        }
        cout << c << " ";
        y = d;
        a = 0;
    }
    cout << endl;
    y = b;
    for( int s = 0; s <= 1; s ++)
    {
        while( abs( y - a) > eps)
        {
            c =( a + y) / 2;
            if( f2( a) * f2( c) < 0)
                y = c;
            else a = c;
        }
        cout << c << " ";
        y = d;
        a = 0;
    }
    cout << endl;
    return 0;
}
