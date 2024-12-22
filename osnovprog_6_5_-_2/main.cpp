#include <iostream>

using namespace std;


int main() {
    setlocale (LC_ALL, "Russian");
    int a, a1, c = 0, i;
    cout << "¬ведите натуральное число от 100 и более = " ;
    cin >> a;
    a1 = a;
    while(a1 != 0) {
        a1 = a1 / 10;
        c ++;
    }
    int R[c];
    a1 = a;
    i = 0;
    while (i < c) {
        R[i] = a1 % 10;
        a1 = a1 / 10;
        i ++;
    }
    cout << R[c - i];
    i = i - 2;
    while (i > 0) {
        cout << R[i];
        i--;
    }
    cout << R[c - 1] << endl;
    return 0;
}
