#include <iostream>
#include <cmath>
using namespace std;
float SUM()
{
    return ((1 + sin(4))/(4 + sin(1)) + (7 + sin(5))/(5 + sin(7)) + (3 + sin(2))/(2 + sin(3)));
}
int main()
{
    float x = SUM();
    cout << x << endl;
    return 0;
}
