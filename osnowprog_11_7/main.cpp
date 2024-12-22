#include <iostream>

using namespace std;

int main()
{
    int m = 20, A[ m]; // создание массива (20)
    for( int i = 0; i < 20; i ++)
    {
        A[ i] = m - i; // заполнение массива
        cout << A[i] << ' '; // вывод массива
    }
    cout << endl; //
    return 0;
}
