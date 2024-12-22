#include <iostream>
using namespace std;
float SUM(float x)
{
    if (x >= 0 && x <= 3) return x * x;
    if (x > 3 || x < 0) return 4;
}
int main()
{
    float f, s;
    cin >> s;
    f = SUM(s);
    cout << f << endl;
    return 0;
}
