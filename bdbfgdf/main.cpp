#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

double calculateIntegral(double x1, double x2, int n) {
    double width = (x2 - x1) / n;
    double integral = 0;

    for (int i = 0; i < n; ++i) {
        double x = x1 + (i + 0.5) * width;
        integral += (log(x) + cos(x)) * width;
    }

    return integral;
}

int main() {
    double x1 = 0, x2 = 1, eps = 0.01, n = 2;
    double integral, F1, F2;
    int iterations = 0;

    // Initial calculation
    F1 = calculateIntegral(x1, x2, n);

    // Use the bisection method to refine the approximation
    do {
        n *= 2;
        F2 = calculateIntegral(x1, x2, n);
        if (F2 > F1) {
            x1 = x1;
            x2 = x1 + (x2 - x1) / 2;
            x1 = x2 - (x2 - x1) / 2;

        }
        else {
             x1 = x1;
             x2 = x2 - (x2 - x1) / 2;
             x2 = x1 + (x2 - x1) / 2;
             x1 = x2 - (x2 - x1) / 2;
        }

        iterations++;
        if (iterations > 1000) {
            cout << "Bisection method did not converge within 1000 iterations." << endl;
            return 0;
        }
    } while (abs(F1 - F2) > eps);

    cout << fixed << setprecision(6) << F2 << endl;

    return 0;
}
