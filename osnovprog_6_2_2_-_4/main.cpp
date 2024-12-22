#include<iomanip>
#include<cmath>
using namespace std;
float sign (float x)
{
    if(x<0) return -1;
    if (x==0) return 0;
    if (x>0) return 1;
}

float f(float x)
{
    return (1/(x+6))+2;
}

int main()
{
    float a = -7.0, b = -6.3, eps = 0.001, c;

    while ( abs(b-a) > 0)
    {
        c = (a + b) / 2;
        if ((sign(f(a))!=sign(f(c))) && (f( a) * f( c) < 0))
            b = c;
        else a = c;

    }
    cout << c << endl;
    return 0;
}
