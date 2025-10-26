#include <iostream>

int main() {
  int n = 100;
  long long a = 0, b = 1, next;

  std::cout << "Числа Фибоначчи от 1 до " << n << ":" << std::endl;

  if (n >= 1) {
    std::cout << a << " ";
  }

  if (n >= 2) {
    std::cout << b << " ";
  }

  for (int i = 2; i < n; ++i) {
    next = a + b;
    std::cout << next << " ";
    a = b;
    b = next;
  }
  std::cout << std::endl;

  return 0;
}
