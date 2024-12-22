#include <iostream>

using namespace std;

int main()
{
    int a, n = 1, c, p = 1;
    cout << "chislo a = ";
    cin >> a;
    cout << "skol'ko povtoreniy = ";
    cin >> c;
    while(n <= c) {
        p *= (a + (n - 1));
        n ++;
        cout << p << endl;
    }
    cout << "okonchatel'nyy otvet = " << p << endl;
    return 0;
}
