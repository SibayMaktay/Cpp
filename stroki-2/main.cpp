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
};
int n = 0;
int Replace_string(string &number)
{
    Prime_numbers obj_1;
    string buf = number;
    while( true)
    {
        int s0 = number.find(">0");
        int s1 = number.find(">1");
        int s2 = number.find(">2");
        if( s0 == -1 && s1 == -1 && s2 == -1)
        {
            break;
        }
        if( s0 != -1)
        {
            number.replace( s0, 2, "1>");
            // cout << number << endl;
        }
        if( s1 != -1)
        {
            number.replace( s1, 2, "22>");
            // cout << number << endl;
        }
        if( s2 != -1)
        {
            number.replace( s2, 2, "2>");
            // cout << number << endl;
        }
    }
    int sum_namder = 0;
    for( int i = 0; i < number.size(); i ++)
    {
        if( number.at(i) == '1')
        {
            sum_namder += 1;
        }
        if( number.at(i) == '2')
        {
            sum_namder += 2;
        }
    }
    if( obj_1.Is_prime( sum_namder))
    {
        return sum_namder;
        return n;
    }
    if( !obj_1.Is_prime( sum_namder))
    {
        n += 1;
        number = buf;
        number.append( "1");
        return Replace_string( number);
    }
}

int main()
{
    string Just_a_number = ">";
    Just_a_number.append( 39, '0');
    Just_a_number.append( 39, '2');
    cout << Replace_string( Just_a_number) << " " << n << endl;
}
