#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double n, a = 1, b = 1, c, i = 0;
    cout << "n = "; cin >> n;
    n = n - 2;
    cout << setprecision(32);
    while (i <= n) {
        c = a + b;
        a = b;
        b = c;
        i ++;
        cout << " a = " << a << "; b = " << b << "; c = " << c << "; n = " << n << "; c = " << c << endl;
    }
    cout << " a = " << a << "; b = " << b << "; c = " << c << "; n = " << n << endl;
    return 0;
}
