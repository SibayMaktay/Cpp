#include <iostream>
#include <cmath>
using namespace std;
int PrimeF( int n, int f[], int &c) {
    c = 0;
    if( n % 2 == 0) {
        f[ c++] = 2; // записываем 2 в массив
        while( n % 2 == 0) n /= 2; // делим число на 2
    }
    for( int i = 3; i <= sqrt(n); i += 2) { // праверяем нечетное делитель от 3 до sqrt(n)
        if( n % i == 0) {
            f[ c++] = i; // записываем делитель в массив
            while( n % i == 0) n /= i; // убираем все степени
        }
    }
    if( n > 1) { // если остался неразложанный множитель, значит он простой
        f[ c++] = n; // записываем его в массив
    }
}

int main() {
    setlocale (LC_ALL, "Russian");
    int g = 20, c = 0, num = 10, f[ g], a;
    while( c < 5) { // ищем 5 чисел
        PrimeF( num, f, a); // находим делители числа num
        //cout << a << " " << num << " " << f << " " << endl;
        int M = 0;
        if( a > 0) { // если есть делитель
            M = f[ 0] + f[ a - 1]; // М = минимальный + максимальный
        }
        if( M != 0 and M % 100 == 31 and M % a == 0) { // проверка условий
            cout << num << " " << M << " " << a << "   ";
            for( int j = 0; j < g; j++) { cout << f[j] << " "; }
            cout << endl;
            c++;
        }
        num++;
    }
    return 0;
}
