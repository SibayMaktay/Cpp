#include <iostream>
#include <fstream>
#include <string>
#include <algorithm>

bool isDigit(char c) {
    return c >= '0' && c <= '9';
}

bool isOperator(char c) {
    return c == '-' || c == '*';
}

bool isValidExpression(const std::string& s) {
    if (s.empty()) return false;

    // �������� �� ������� ���� � ������������ ���������
    for (size_t i = 0; i < s.length(); ++i) {
        if (isDigit(s[i])) {
            // ���� ������� ������ '0' � ���� ��������� ������, ������� ���� �����
            if (s[i] == '0' && i + 1 < s.length() && isDigit(s[i + 1])) {
                return false; // ������� ����
            }
        } else if (isOperator(s[i])) {
            // �������� � ������, ����� ��� ��� ��������� ������
            if (i == 0 || i == s.length() - 1 || isOperator(s[i - 1]) || isOperator(s[i + 1])) {
                return false;
            }
        } else {
            return false; // ������������ ������
        }
    }
    return true;
}

int main() {
    setlocale(LC_ALL, "Russian");
    std::ifstream file("file.txt");
    if (!file.is_open()) {
        std::cerr << "�� ������� ������� ����!" << std::endl;
        return 1;
    }

    // ������������ ������: ��������� ������ ���� ���� � ������
    std::string content((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());
    std::string currentSequence;
    int maxLength = 0;

    for (char ch : content) {
        if (isDigit(ch) || isOperator(ch)) {
            currentSequence += ch;
        } else {
            if (isValidExpression(currentSequence)) {
                maxLength = std::max(maxLength, static_cast<int>(currentSequence.length()));
            }
            currentSequence.clear();
        }
    }

    // �������� ��������� ������������������
    if (isValidExpression(currentSequence)) {
        maxLength = std::max(maxLength, static_cast<int>(currentSequence.length()));
    }

    std::cout << "������������ ����� ����������� ���������: " << maxLength << std::endl;

    file.close();
    return 0;
}
