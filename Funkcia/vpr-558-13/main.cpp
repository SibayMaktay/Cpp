#include <iostream>
using namespace std;
int f(int n, int k)
{
    if( n == k) return 1;
    if( n > k) return 0;
    if( n < k) return f( n + 1, k) + f( n + 2, k) + f( n * 2, k);
}
int main()
{
    cout << f( 4, 10) * f( 10, 12) * f( 12, 13) << endl;
    return 0;
}
