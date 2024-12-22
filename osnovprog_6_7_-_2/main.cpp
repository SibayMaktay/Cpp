#include <iostream>
using namespace std;
int main()
{
    int a[5], b, c = 0;
    while( c < 5 ) {
        cin >> b;
        a[ c ] = b;
        c ++;
    }
    c = 0;
    while( c < 5 ) {
        if (a[c] == 0) {
            cout << "A[ " << c << " ] = { " << a[c] << " } ";
            c ++;
        }
        else c ++;
    }
    return 0;
}
