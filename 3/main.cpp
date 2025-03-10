#include <iostream>
#include <cmath>
using namespace std;

double G(double z)
{
    // cout << cos(z) - z << " " << z << " " << cos(z) << endl;
    return cos(z) - z;
}

double f( double x, double x2, int d)
{
    double y = (x2 - x) / d , sum = 0, z1, z2;// cout << x << " " << x2 << " " << d << " " << y << endl; // начальные данные f()
    for( int i = 0; i < d; i ++)
    {
        z1 = x + i * y;
        z2 = x + (i + 1) * y;
        sum += 0.5 * (G(z1) + G(z2)) * y; // вычисляем площадь прямоугольника
        // cout << z1 << " " << z2 << " " << sum << endl;
    }
    return sum;
}
int main()
{
    int d = 2;
    double x1 = 0, x2 = 0.739085, eps = 0.000001, F2 = f( x1, x2, d), F1; // начальные данные
    do{
        d = d * 2; // делим прямоугольник пополам по x
        F1 = F2; // приравниваем F2 к F1
        F2 = f( x1, x2, d); // вычисляем F2
        // cout << F2 << " " << F1 << " " << d << " " << x1 << " " << x2 << endl;
    }
    while( fabs( F1 - F2) >= eps); // условие |F1 - F2| < 0.001
    cout << F2 << endl;
    return 0;
}
