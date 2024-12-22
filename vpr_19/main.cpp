#include <iostream>

using namespace std;

int main()
{
    int a, k, x, i, y, t = 1;
    while (t <= 999) {
        t ++;
        a = 100; k = 0; x = 1; i = 0; y = -1;
        while (a <= 999) {
            i = a % x;
            if (i == 0) {
                k++;
                x++;
            }
            else {
                if (x <= a)
                    x++;
                else {
                    x=1;
                    if (k == t)
                        y = a;
                    k=0;
                    a++;
                }
            }
        }
        if (y!=-1) cout << t << " ";
        else;
    }
    return 0;
}
