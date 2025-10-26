#include <iostream>
#include <vector>
#include <set>
#include <cmath>
using namespace std;

const int MAX_N1 = 15000000;
vector<int> lp;
vector<int> pr;

void build_sieve() {
    lp.resize(MAX_N1 + 1, 0);
    for (int i = 2; i <= MAX_N1; ++i) {
        if (lp[i] == 0) {
            lp[i] = i;
            pr.push_back(i);
        }
        for (int j = 0; j < (int)pr.size() && pr[j] <= lp[i] && i * pr[j] <= MAX_N1; ++j) {
            lp[i * pr[j]] = pr[j];
        }
    }
}

set<int> get_divs_sieve(int n) {
    set<int> divs;
    int temp = n;
    while (temp > 1) {
        divs.insert(lp[temp]);
        int p = lp[temp];
        while (temp % p == 0)
            temp /= p;
    }
    return divs;
}

int main() {
    build_sieve();
    int count_found = 0;
    for (int n = 7500002; n <= MAX_N1 && count_found < 5; n += 2) {
        set<int> divs = get_divs_sieve(n);
        divs.erase(n);
        if (divs.empty()) continue;

        int min_p = *divs.begin();
        int max_p = *divs.rbegin();
        int M = min_p + max_p;
        int cnt = divs.size();

        if (M % 100 == 31 && M % cnt == 0) {
            cout << n << endl;
            count_found++;
        }
    }

    if (count_found < 5) {
        long long n = MAX_N1 % 2 == 0 ? MAX_N1 + 2 : MAX_N1 + 1;
        while (count_found < 5) {
            set<int> divs;
            long long temp = n;
            if (temp % 2 == 0) {
                divs.insert(2);
                while (temp % 2 == 0)
                    temp /= 2;
            }
            for (long long d = 3; d * d <= temp; d += 2) {
                if (temp % d == 0) {
                    divs.insert(d);
                    while (temp % d == 0)
                        temp /= d;
                }
            }
            if (temp > 1)
                divs.insert(temp);
            divs.erase(n);
            if (!divs.empty()) {
                int min_p = *divs.begin();
                int max_p = *divs.rbegin();
                long long M = min_p + max_p;
                int cnt = divs.size();
                if (M % 100 == 31 && M % cnt == 0) {
                    cout << n << endl;
                    count_found++;
                }
            }
            n += 2;
        }
    }

    return 0;
}
