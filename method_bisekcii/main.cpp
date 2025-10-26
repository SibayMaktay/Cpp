#include <iostream>
#include <cmath>
using namespace std;
double f(double x) {
  return log(x) + cos(x);
}
double bisection(double a, double b, double epsilon) {
  if (f(a) * f(b) >= 0) {
    return -1;
  }
  int iterations = 0;
  double c;
  do {
    iterations++;
    c = (a + b) / 2;
    if (f(c) == 0) {
      return c;
    }
    if (f(c) * f(a) < 0) {
      b = c;
    } else {
      a = c;
    }
    if (iterations > 1000) {
      return -1;
    }
  } while (abs(b - a) > epsilon);

  return (a + b) / 2;
}
int main() {
  double a = 0, b = 1, epsilon = 0.01;
  double root = bisection(a, b, epsilon);
  if (root != -1) {
    cout << root << endl;
  }
  return 0;
}
