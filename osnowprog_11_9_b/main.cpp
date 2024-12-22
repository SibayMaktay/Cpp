#include <iostream>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    float a, p, A[ 20];
    cout << "¬ведите a = ";
    cin >> a;
    cout << ends << "¬ведите p = ";
    cin >> p;
    A[ 0] = a;
    cout << A[ 0] << endl;
    for( int i = 1; i < 10; i ++)
    {
        A[ i] = A[ i - 1] * p;
        cout << A[ i] << endl;
    }

    return 0;
}
