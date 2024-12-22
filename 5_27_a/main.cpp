#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Russian");
    float x, y, z, s, q, d, u;

    cout << "¬ведите любое число a ";
    cin >> x;
    cout << "¬ведите любое число b больше а ";
    cin >> s;
    for (int y = x, u = 1 ; y <= s; ++y, ++u )
    {
        double z = y + z;
        //double z = y + z;
        //double d = s
        double q = z / u;
        cout << u << ") " << y << " " << z << " средние значение = " << q << endl;
    }

    return 0;
}
