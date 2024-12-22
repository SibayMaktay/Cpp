#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    /*double a = 3, s, x, c;
    cout << " x = ";
    cin >> x;
    s = c = x;
    cout << setprecision(16);
    while (a <= 11)
    {
        x = x * (c * c);
        s += x / a;
        cout << s << endl;
        a = a + 2;
    }
    cout << s << endl;
    return 0;*/
    /*double a = 2, b = 3, s = 1, i = 1, x = 2, c = -1;
    cout << setprecision(16);
    while (i <= 10)
    {
        s += (a / b) * x * c;
        cout << a << " " << b << " " << s << " " << i << " "  << x << " "  << c << endl;
        x = x * 2;
        a ++;
        b ++;
        i ++;
        c = -c;
    }
    cout << " a = " << a << "; b = " << b << "; s = " << s << "; i = " << i << "; x = "  << x << "; c = "  << c << endl;
    return 0;*/
    double i,s = 1, a = 1, b = 2, c = -1;
    cout << "i = "; cin >> i;
    cout << setprecision(16);
    while (b <= i) {
        s += (a / b) * c;
        b ++;
        c = -c;
        cout << " i = " << i << "; b = " << b << "; s = " << s << " km. " << endl;
    }
    cout << " s = " << s << " km. " << endl;
    return 0;
}
