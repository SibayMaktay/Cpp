#include <iostream>

using namespace std;

int main()
{
    const int N = 39;
    int a[N], i = 0, n = 1;
    for ( i = 0; i < N; n ++) {
        if (( n % 13 == 0) or ( n % 17 == 0))
            a[i ++] = n;
    }
    for (i = 0; i < N; i ++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}
