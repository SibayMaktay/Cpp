#include <iostream>

using namespace std;

int main()
{
    long int x[20], a, p;
    cin >> a; cin >> p;
    for (int i = 0; i < 10; i++) {
        x[i] = a;
        a *= p;
    }
    for (int i = 0; i < 10; i++)
        cout << x[i] << " ";
    cout << endl;
    return 0;
}
