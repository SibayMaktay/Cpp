#include <iostream>
using namespace std;
int main()
{
    bool x = 1;
    for (int A = 0; A <= 1; ++A)
    {
        for (int B = 0; B <= 1; ++B)
        {
            for (int C = 0; C <= 1; ++C)
            {
                bool y = A || (B && C);
                bool z = (A || B) && (A || C);
                if (y == z)
                {
                    x = 0;
                    cout << "A = " << A << ", B = " << B << ", C = " << C << endl;
                }
            }
        }
    }
    if (x)
    {
        cout << "For all possible values ​​of A, B and C, the expressions are equivalent" << endl;
    }
    return 0;
}
