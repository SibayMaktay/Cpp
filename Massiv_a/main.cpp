#include <iostream>

using namespace std;

int main()
{
    int a[5], b, c = 0;
    //cin >> 5;
    while ( c < 5 ) {
        cin >> b;
        a[c] = b;
        c ++;
    }
    c = 0;
    while ( c < 5 ) {
        cout << a[c] << ends;
        c ++;
    }

    return 0;
}
