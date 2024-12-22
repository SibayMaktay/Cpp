#include <iostream>
using namespace std;
int main()
{
    int  a[6], b = 0;
    a[0] = 7, a[1] = -2, a[2] = 5, a[3] = -8, a[4] = 2, a[5] = -3;
    if (a[0] > 0)
        cout << "+";
    if (a[0] < 0)
        cout << "-";
    if (a[0] = 0) cout << "0";
    cout << endl;
    return 0;
}
