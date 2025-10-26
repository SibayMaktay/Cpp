#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
#include <cmath>

using namespace std;

const int MAX_SIEVE = 1e6;
bool is_prime_fast[MAX_SIEVE + 1];

void build_sieve() {
    fill(is_prime_fast, is_prime_fast + MAX_SIEVE + 1, true);
    is_prime_fast[0] = is_prime_fast[1] = false;
    for (int i = 2; i * i <= MAX_SIEVE; ++i) {
        if (is_prime_fast[i]) {
            for (int j = i * i; j <= MAX_SIEVE; j += i) {
                is_prime_fast[j] = false;
            }
        }
    }
}

vector<int> get_unique_prime_factors(int n) {
    vector<int> factors;
    if (n <= 1)
        return factors;
    unordered_set<int> prime_factors;
    int x = n;
    for (int i = 2; i * i <= x; ++i) {
        if (x % i == 0) {
            if (i != n)
                prime_factors.insert(i);
            while (x % i == 0)
                x /= i;
        }
    }
    if (x > 1 && x != n)
        prime_factors.insert(x);
    factors.assign(prime_factors.begin(), prime_factors.end());
    return factors;
}

int main() {
    build_sieve();
    int count_found = 0;
    long long N = 7500001;
    while (count_found < 5) {
        vector<int> factors = get_unique_prime_factors(N);
        if (!factors.empty()) {
            int min_p = *min_element(factors.begin(), factors.end());
            int max_p = *max_element(factors.begin(), factors.end());
            int M = min_p + max_p;
            int count_p = factors.size();
            if (M % 100 == 31 && M % count_p == 0) {
                cout << N << endl;
                ++count_found;
            }
        }
        ++N;
    }
    return 0;
}
