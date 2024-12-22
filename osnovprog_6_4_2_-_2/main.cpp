#include <iostream>
#include <cmath>
using namespace std;
int main()
{

    //cin >> x;
    float S = 0, a = 1, i = 0;
    double x;
    //double sin(x);
    cin >> x;
    for (; i < x; i++)
    {
        S = S + a / sin(x);
        }
    cout<< S ;

    return 0;
}
