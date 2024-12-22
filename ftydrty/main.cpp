#include <iostream>
#include <string>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int count = 0;
    for (int i = 0; i < n; i++) {
        string num = "";
        for (int j = 0; j < i; j++) {
            num += '0';
        }
        num += '1';
        for (int j = i + 1; j < n; j++) {
            num += '9';
        }

        int sum = 0;
        for (int j = 0; j < n; j++) {
            sum += num[j] - '0';
        }

        if (sum == k) {
            count++;
        }
    }

    cout << count << endl;

    return 0;
}
