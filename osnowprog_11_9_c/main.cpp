#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float a = 1, p = 1, c = a, A[ 20];
    for( int i = 0; i < 20; i ++)
    {
        A[ i] = p;
        a = a + p;
        p = c;
        c = a;
        cout << A[ i] << endl;
    }

    return 0;
}
