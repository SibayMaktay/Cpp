#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
    int n = 10, A[n], i;//={37, 0, 50, 46, 34, 46, 0, 13};
    for (i = 0; i < n; i ++) {
        cout << " A = [ " << i << " ]"; cin >> A[n];
    }
    for ( i = 0, i < n, i ++) {
        cout << "A [ " << i << " ] = " << A[n];
    }
    return 0;
}
