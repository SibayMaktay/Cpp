#include <iostream>

using namespace std;

int main()
{
    double KmH, MS;
    cout << "������� km/h = ";
    cin >> KmH;
    MS = KmH / 3600  * 1000;
    cout << MS << endl;
    return 0;
}
