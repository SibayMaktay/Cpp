#include <iostream>

using namespace std;

int main()
{
    int m = 20, A[ m]; // �������� ������� (20)
    for( int i = 0; i < 20; i ++)
    {
        A[ i] = m - i; // ���������� �������
        cout << A[i] << ' '; // ����� �������
    }
    cout << endl; //
    return 0;
}
