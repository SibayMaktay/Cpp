#include <iostream>
#include <string>
#include <cmath>

using namespace std;

class Prime_numbers
{
public:
    bool Is_prime( int n)
    {
        if( n <= 1)
            return false;
        for( int i = 2; i <= sqrt( n); i ++)
        {
            if( n % i == 0)
                return false;
        }
        return true;
    }
    int P_n_i = 0, Sum_of_prime_numbers[200], Seed_number = 1, Final_number = 1000;
    void Find_primes()
    {
        for( int P_n = Seed_number; P_n <= Final_number; P_n ++)
        {
            if( Is_prime(P_n))
            {
                Sum_of_prime_numbers[ P_n_i] = P_n;
                P_n_i ++;
            }
        }
    }
};

int main()
{
    int A[200];
    Prime_numbers obj;
    obj.Find_primes();
    for( int i = 0; i <= obj.P_n_i; i ++)
        A[ i] = obj.Sum_of_prime_numbers[ i]; // Присвоение простых чисел к массиву A[]

    string s = string( 70, '8'), s22("22"), s88("88"), s2222("2222"), s8888("8888");
    cout << s << endl;
    while( s.find(s2222) != string :: npos or s.find(s8888) != string :: npos)
    {
        if( s.find(s2222) != string :: npos)
            s.replace( s.find(s2222), s8888.size(), s88);
        else s.replace( s.find(s8888), s2222.size(), s22);
        cout << s << endl;
    }
    //cout << string :: npos << endl;
    //cout << s << endl;
    return 0;
}
