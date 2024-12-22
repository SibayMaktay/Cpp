#include <iostream>
#include <ctime>

using namespace std;

int main()
{
    const int n = 15;
    int a[n];
    srand(time(0));
    for (int i = 0; i < n; i ++)
        a[i] = rand() % 11;
    for (int i = 0; i < n; i ++)
        cout << a[i] << " ";
    cout << endl;
    return 0;
}
