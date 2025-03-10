#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// Функция для вычисления разности cos(x) - x
double f(double x) {
    return cos(x) - x;
}

// Функция для вычисления площади методом трапеций
double trapezoidalMethod(double a, double b, int n) {
    double h = (b - a) / n; // Шаг разбиения
    double area = 0.0;

    // Суммируем площади трапеций
    for (int i = 0; i < n; i++) {
        double x1 = a + i * h; // Левая граница трапеции
        double x2 = a + (i + 1) * h; // Правая граница трапеции
        area += 0.5 * (f(x1) + f(x2)) * h; // Площадь трапеции
    }

    return area;
}

int main() {
    // Точка пересечения (найдена заранее)
    double x0 = 0.739085;

    // Пределы интегрирования
    double a = 0.0; // Нижний предел
    double b = x0;  // Верхний предел

    // Количество разбиений (чем больше, тем точнее)
    int n = 1000;

    // Вычисление площади методом трапеций
    double area = trapezoidalMethod(a, b, n);

    // Вывод результата
    cout << "Площадь между графиками: S = " << setprecision(6) << area << endl;

    return 0;
}
