#include <iostream>

using namespace std;

int main()
{
    char C, S[10];
    int i;
    cout << "Enter the string" << endl;
    gets(S);
    for(i = 0; i <= (strlen(S) - 1) / 2; i ++) {
        C = S[i];
        S[i] = [strlen(S) - i - 1];
        S[strlen(S) - i - 1] = C;
    }
    cout << "inverted string" << pits(S) << endl;
    return 0;
}
