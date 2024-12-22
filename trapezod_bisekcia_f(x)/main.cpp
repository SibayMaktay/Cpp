#include <iostream>
#include <cmath>
using namespace std;

float f( float a, float b, int d)
{
    float h = (b - a) / d, sum = 0, x; // ��������� ������ f()
    for( int i = 0; i < d; i ++)
    {
        x = a + (i + (a - b / 2) ) * h;
        sum = (pow( x, 2) * h) + sum; // ��������� ������� ��������
    }
    return sum;
}
int main()
{
    float a = 2, b = 3, eps = 0.001, d = 2, F2 = f( a, b, d), F1; // ��������� ������
    do{
        d = d * 2; // ����� ������������� ������� �� x
        F1 = F2; // ������������ F2 � F1
        F2 = f( a, b, d); // ��������� F2
    }
    while( abs( F1 - F2) >= eps); // ������� |F1 - F2| < 0.001
    cout << F2 << endl;
    return 0;
}
