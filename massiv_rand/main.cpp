#include <iostream>
#include <ctime>
using namespace std;
int main()
{
    srand( time( 0));
    int A[ 8];
    for( int i = 0; i < 8; i ++)
    {
        A[ i] = time( 0);
    }
    for( int i = 0; i < 8; i ++)
    {
        cout << A[ i] << endl;
    }
    return 0;
}
