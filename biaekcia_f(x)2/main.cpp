#include <iostream>
#include <cmath>

using namespace std;

// Функция для вычисления площади под кривой
double calculateArea(double x1, double x2, int n) {
  double width = (x2 - x1) / n, area = 0;
  for (int i = 0; i < n; i++) {
    double x;
      x = x1 + (i + 0.5) * width;
    area += pow(x, 2) * width; // Вычисляем площадь прямоугольника
  }
  return area;
}

int main() {

    double x1 = 2, x2 = 3, eps = 0.001, n = 2, F1, F2;
    F1 = calculateArea(x1, x2, n);
    do {
        n *= 2; // Удваиваем количество прямоугольников
        F2 = calculateArea(x1, x2, n);
        F1 = F2;
    } while ( abs(F1 - F2) >= eps);

    cout << F2 << endl;

    return 0;
}

