#include <iostream>

using namespace std;

int main()
{
    setlocale(0, "Russian");
    float x, y, z, s, q, d, u;

    cout << "������� ����� ����� a ";
    cin >> x;
    cout << "������� ����� ����� b ������ � ";
    cin >> s;
    for (int y = x, u = 1 ; y <= s; ++y, ++u )
    {
        double z = y + z;
        //double z = y + z;
        //double d = s
        double q = z / u;
        cout << u << ") " << y << " " << z << " ������� �������� = " << q << endl;
    }

    return 0;
}
