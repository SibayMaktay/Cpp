#include <iostream>
#include <cmath>
using namespace std;
int PrimeF( int n, int f[], int &c) {
    c = 0;
    if( n % 2 == 0) {
        f[ c++] = 2; // ���������� 2 � ������
        while( n % 2 == 0) n /= 2; // ����� ����� �� 2
    }
    for( int i = 3; i <= sqrt(n); i += 2) { // ��������� �������� �������� �� 3 �� sqrt(n)
        if( n % i == 0) {
            f[ c++] = i; // ���������� �������� � ������
            while( n % i == 0) n /= i; // ������� ��� �������
        }
    }
    if( n > 1) { // ���� ������� ������������� ���������, ������ �� �������
        f[ c++] = n; // ���������� ��� � ������
    }
}

int main() {
    setlocale (LC_ALL, "Russian");
    int g = 20, c = 0, num = 10, f[ g], a;
    while( c < 5) { // ���� 5 �����
        PrimeF( num, f, a); // ������� �������� ����� num
        //cout << a << " " << num << " " << f << " " << endl;
        int M = 0;
        if( a > 0) { // ���� ���� ��������
            M = f[ 0] + f[ a - 1]; // � = ����������� + ������������
        }
        if( M != 0 and M % 100 == 31 and M % a == 0) { // �������� �������
            cout << num << " " << M << " " << a << "   ";
            for( int j = 0; j < g; j++) { cout << f[j] << " "; }
            cout << endl;
            c++;
        }
        num++;
    }
    return 0;
}
