#include <iostream>
//#include <iomanip>
using namespace std;
int main()
{
    /*double x = 20.4 ;
    for (int y = 2 ; y <= 20; ++y )
    {
        double z = y * x;
        cout << y << ") " << z << endl;
    }*/
    bool x = 1;
    for (int A = 0; A <= 1; ++A)
    {
        for (int B = 0; B <= 1; ++B)
        {
            if ((A || B) == (B || A))
            {
                x = 0;
                cout << "A = "<< A << ", B = " << B << endl;
            }
        }
    }
    if (x)
    {
        cout << "true" << endl;
    }
    return 0;
}
