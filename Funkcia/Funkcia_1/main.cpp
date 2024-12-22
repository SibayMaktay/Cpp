#include <iostream>
using namespace std;

float F(float x)
{
    if( x <= 3) return (( x * x) - (3 * x) + 9);
    else return ( 1 / (x * x * x) - 6);
}

int main()
{
    float f;
    cin >> f;
    f = F(f);
    cout << f << endl;
    return 0;
}
