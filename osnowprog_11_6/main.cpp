#include <iostream>

using namespace std;

int main()
{
    int A[ 12];
    for( int i = 0; i < 12; i ++)
    {
        A[i] = i + 1;
        cout << A[ i] << ' ';
    }
    cout << endl;
    return 0;
}
