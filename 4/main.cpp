#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

// ������� ��� ���������� �������� cos(x) - x
double f(double x) {
    return cos(x) - x;
}

// ������� ��� ���������� ������� ������� ��������
double trapezoidalMethod(double a, double b, int n) {
    double h = (b - a) / n; // ��� ���������
    double area = 0.0;

    // ��������� ������� ��������
    for (int i = 0; i < n; i++) {
        double x1 = a + i * h; // ����� ������� ��������
        double x2 = a + (i + 1) * h; // ������ ������� ��������
        area += 0.5 * (f(x1) + f(x2)) * h; // ������� ��������
    }

    return area;
}

int main() {
    // ����� ����������� (������� �������)
    double x0 = 0.739085;

    // ������� ��������������
    double a = 0.0; // ������ ������
    double b = x0;  // ������� ������

    // ���������� ��������� (��� ������, ��� ������)
    int n = 1000;

    // ���������� ������� ������� ��������
    double area = trapezoidalMethod(a, b, n);

    // ����� ����������
    cout << "������� ����� ���������: S = " << setprecision(6) << area << endl;

    return 0;
}
