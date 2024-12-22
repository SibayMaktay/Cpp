#include <iostream>
using namespace std;
int f(int n, int k, int i)
{
    if( n == k) return 1;
    if(( n > k) or( n == i)) return 0;
    if( n < k) return f( n + 1, k, i) + f( n * 2, k , i);
}
int main()
{
    cout << f( 3, 20, 30) * f( 20, 41, 30) << endl;
    return 0;
}
