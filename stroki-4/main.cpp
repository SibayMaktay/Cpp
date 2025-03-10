#include <iostream>
#include <string>
#include <cmath>
#include <algorithm> // ��� std::remove

using namespace std;

// ������� ��� ��������, �������� �� ����� �������
bool IsPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// ������� ��� ���������� ����� � ������
int ReplaceString(string &number) {
    while (true) {
        size_t pos1 = number.find(">1");
        size_t pos2 = number.find(">2");
        size_t pos0 = number.find(">0");

        if (pos1 == string::npos && pos2 == string::npos && pos0 == string::npos) {
            break; // ���� ������ ��� �������� ��� ������
        }

        // ��������� ������ � ���������� �������
        if (pos1 != string::npos) {
            number.replace(pos1, 2, "22>");
            cout << number << endl;
        } else if (pos2 != string::npos) {
            number.replace(pos2, 2, "2>");
            cout << number << endl;
        } else if (pos0 != string::npos) {
            number.replace(pos0, 2, "1>");
            cout << number << endl;
        }
    }

    // ������� ������ '>' �� ������
    number.erase(std::remove(number.begin(), number.end(), '>'), number.end());

    // ������� ����� ����
    int sum = 0;
    for (char c : number) {
        if (c == '1') sum += 1;
        else if (c == '2') sum += 2;
    }

    return sum;
}

int main() {
    int min_n = -1; // ���������� �������� n

    // ���������� n �� 1 �� 200 (����� ���������, ���� �����)
    for (int n = 1; n <= 200; n++) {
        // ������� ������: ">" + 39 "0" + n "1" + 39 "2"
        string number = ">" + string(39, '0') + string(n, '1') + string(39, '2');

        // ��������� ������ � ������� ����� ����
        int sum = ReplaceString(number);

        // ���������, �������� �� ����� ������� ������
        if (IsPrime(sum)) {
            min_n = n;
            break; // ����� ����������� n, ������� �� �����
        }
    }

    if (min_n != -1) {
        cout << "���������� �������� n: " << min_n << endl;
    } else {
        cout << "���������� �������� n �� �������." << endl;
    }

    return 0;
}
