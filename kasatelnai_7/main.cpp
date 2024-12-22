#include <iostream>
#include <cmath>
using namespace std;
float f(float x)
{
    return tan( x) - x;
}
float fp(float x)
{
  //  return 1 + (cos( x) / sin( x));
    return 1 / pow( cos( x), 2) - 1;
}
int main()
{
    float eps = 0.00001, c = 4.5;
    while( fabs( f( c)) > eps)
    {
        c = c - f( c) / fp( c);
    }
    cout << c << " " << f( c) <<endl;
    return 0;
}
