#include <iostream>

using namespace std;

int main()
{
    int n, k, i = 0, j = 1, s, p, a = 0;
    cout << "n = ";
    cin >>  n;
    cout << "k = ";
    cin >> k;
    while(i < n) {
        j = j * 10;
        i ++;
    }
    i = j / 10;
    for(; i < j; i ++) {
        p = i;
        s = 0;
        while(p != 0) {
            s = s + p % 10;
            p = p / 10;
        }
        if (s == k) {
            cout << i << endl;
            a ++;
        }
    }
    cout << a << endl;
    return 0;
}
