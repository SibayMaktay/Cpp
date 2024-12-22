#include <iostream>

using namespace std;

int main()
{
    int n, i = 0, a[6];
    cin >> n;
    while( n > 0) {
        a[i] = n % 10;
        n = n / 10;
        i = i + 1;
    }
    for ( i = 0; i < 6; i ++)
        cout << a[i];
    cout << " " << a << " " << n << " " << i << " " << endl;
    return 0;
}
