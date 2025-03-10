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

    // Проверка на ведущие нули и корректность выражения
    for (size_t i = 0; i < s.length(); ++i) {
        if (isDigit(s[i])) {
            // Если текущий символ '0' и есть следующий символ, который тоже цифра
            if (s[i] == '0' && i + 1 < s.length() && isDigit(s[i + 1])) {
                return false; // Ведущий ноль
            }
        } else if (isOperator(s[i])) {
            // Оператор в начале, конце или два оператора подряд
            if (i == 0 || i == s.length() - 1 || isOperator(s[i - 1]) || isOperator(s[i + 1])) {
                return false;
            }
        } else {
            return false; // Недопустимый символ
        }
    }
    return true;
}

int main() {
    setlocale(LC_ALL, "Russian");
    std::ifstream file("file.txt");
    if (!file.is_open()) {
        std::cerr << "Не удалось открыть файл!" << std::endl;
        return 1;
    }

    // Исправленная строка: правильно читаем весь файл в строку
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

    // Проверка последней последовательности
    if (isValidExpression(currentSequence)) {
        maxLength = std::max(maxLength, static_cast<int>(currentSequence.length()));
    }

    std::cout << "Максимальная длина корректного выражения: " << maxLength << std::endl;

    file.close();
    return 0;
}
