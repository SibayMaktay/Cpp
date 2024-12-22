#include <iostream>

using namespace std;

long long f( long long x)
{
    if( x == 1) return 1;
    else return (x - 1) * f( x - 1);
}

int main()
{
    long long N = (f(2024) + 2 * f(2023)) / f(2022);
    cout << N << endl;
    return 0;
}
