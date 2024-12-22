#include <iostream>

using namespace std;

int main()
{
    float s = 2, a = 3, b = 4, c = 1;
    while (a <= 11) {
        s += (a / b) * c;
        cout << " s = " << s << endl;
        a = a + 2;
        b = b * 2;
        c = -c;
        cout << " a = " << a << "; b = " << b << "; c = " << c << "; s = " << s << endl;
    }
    //cout << " a = " << a << "; b = " << b << "; c = " << c << "; s = " << s << endl;
    return 0;
}
