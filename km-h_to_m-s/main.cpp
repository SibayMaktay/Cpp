#include <iostream>

using namespace std;

int main()
{
    double KmH, MS;
    cout << "¬ведите km/h = ";
    cin >> KmH;
    MS = KmH / 3600  * 1000;
    cout << MS << endl;
    return 0;
}
