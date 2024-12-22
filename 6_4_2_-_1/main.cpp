#include <iostream>
#include <cmath>

using namespace std;


int main() {
    setlocale (LC_ALL, "Russian");
    double n, i, s;
    cout << "¬ведите натуральное число = " ;
    cin >> n;
    for(i = 1, s = 1;i <= n; i ++) {
        s = pow(-1, i) * (1 / pow( 2, i));
    }
    cout << s << endl;
    return 0;
}
