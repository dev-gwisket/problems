#include <iostream>

int main() {
  unsigned A;
  unsigned B;

  while (true) {
    std::cin >> A >> B;

    if (A == 0 && B == 0) {
      break;
    }

    std::cout << A + B << std::endl;
  }

  return 0;
}

