#include <iostream>

using namespace std;

int main()
{
    int A = 100, S, a1 = 0, SUM, s1, s2, MaxSUM = 0;
    for( int k = 100; k < 1000; k ++, A ++) // ���� �� 100 �� 999
    {
        s1 = A / 10; // ���������� 10
        s2 = s1 / 10; // ���������� 100
        S = s2 + (s1 - (s2 * 10)) + (A - (s1 * 10)); // ���������� ���� ��� ����
        SUM = A * S; // �������� ������
        if( SUM < 5997) // ������� ���������� ����� ������ 5997
        {
            if( MaxSUM < SUM) // ������� ���������� ������������ ���������
            {
                MaxSUM = SUM; // ���������� ������������� ��������
                cout << SUM << " " << A << " " << S << " " << MaxSUM << endl; // ����� ��������
            }
        //cout << SUM << " " << A << " " << S << " " << MaxSUM << endl;
        }
    }
    return 0;
}
