#include <iostream>

using namespace std;

int main()
{
    int a[20];
    for (int i = 0; i < 20; i++) {
        a[i] = 20 - i;
        cout << a[i] << " ";
    }
    cout << endl;
    for (int i=0;i<20;i++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}
