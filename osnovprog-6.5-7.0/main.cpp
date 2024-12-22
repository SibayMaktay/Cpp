#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int k, n, j, sum, cnt=0;
    cout << "k=" ;
    cin >> k;
    cout << "n=";
    cin >> n;
    int nach=pow(10,n-1);
    int kon=pow(10,n)-1;
    cout << nach << " " << kon << endl;
    for (int i=nach; i < kon; i++)
    {
        j=i;
        sum=0;
        while (j>0)
        {
            sum+=j%10;
            j/=10;
        }
        if (sum==k)
        {
            cout << i << endl;
            cnt++;
        }

    }
    cout << cnt << endl;
    return 0;
}
