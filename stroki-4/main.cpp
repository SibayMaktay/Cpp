#include <iostream>
#include <string>
#include <cmath>
#include <algorithm> // Для std::remove

using namespace std;

// Функция для проверки, является ли число простым
bool IsPrime(int n) {
    if (n <= 1) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

// Функция для выполнения замен в строке
int ReplaceString(string &number) {
    while (true) {
        size_t pos1 = number.find(">1");
        size_t pos2 = number.find(">2");
        size_t pos0 = number.find(">0");

        if (pos1 == string::npos && pos2 == string::npos && pos0 == string::npos) {
            break; // Если больше нет подстрок для замены
        }

        // Выполняем замены в правильном порядке
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

    // Удаляем символ '>' из строки
    number.erase(std::remove(number.begin(), number.end(), '>'), number.end());

    // Считаем сумму цифр
    int sum = 0;
    for (char c : number) {
        if (c == '1') sum += 1;
        else if (c == '2') sum += 2;
    }

    return sum;
}

int main() {
    int min_n = -1; // Наименьшее значение n

    // Перебираем n от 1 до 200 (можно увеличить, если нужно)
    for (int n = 1; n <= 200; n++) {
        // Создаем строку: ">" + 39 "0" + n "1" + 39 "2"
        string number = ">" + string(39, '0') + string(n, '1') + string(39, '2');

        // Выполняем замены и считаем сумму цифр
        int sum = ReplaceString(number);

        // Проверяем, является ли сумма простым числом
        if (IsPrime(sum)) {
            min_n = n;
            break; // Нашли минимальное n, выходим из цикла
        }
    }

    if (min_n != -1) {
        cout << "Наименьшее значение n: " << min_n << endl;
    } else {
        cout << "Подходящее значение n не найдено." << endl;
    }

    return 0;
}
