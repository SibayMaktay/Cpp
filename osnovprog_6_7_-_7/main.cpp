#include <iostream>

using namespace std;

int main()
{
    int z, a1 = 0, b = 0;
    cin >> z;
    int  a[6];
    a[0] = 7, a[1] = 4, a[2] = 5, a[3] = 8, a[4] = 2, a[5] = 3;
    while(b < 6){
        if (a[b] > z) {
            a[b] = z;
            a1 ++;
        }
        cout << a[b];
        b ++;
    }
    cout << endl;
    cout << a1;
    return 0;
}
