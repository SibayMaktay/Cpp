#include <iostream>
using namespace std;
int main() {
    int a[6], b, c, d, e = 1, f = 1;
    a[0] = 7, a[1] = -2, a[2] = 5, a[3] = -8, a[4] = 2, a[5] = -3;
    while (e < 6) {
    if (a[e] < a[f])
        b = a[e];
    if (a[e] > a[f])
        c = a[e];
    f ++;
    e ++;
    }
    d = (b - c) + 1;
    cout << d << endl;
    return 0;
}
