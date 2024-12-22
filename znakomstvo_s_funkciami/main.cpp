#include <iostream>
#include <cstdlib>

using namespace std;

double getDistMile()
{
    double dist;
    cout << "";
    cin >> dist;
    return dist;
}
double getDistKm()
{
    double kmInMile = 1.609344;
    return (dist*kmInMile);
}
int main()
{
    system("chcp 1251>nul");
    double distMile = getDistMile();
    count << "" << getDistKm(distMile) << endl;
    system("pause>nul");
    return 0;
}
