#include <iostream>

int main() {
  int x;
  int y;

  std::cin >> x >> y;

  if (x > 0) {
    if (y > 0) {
      std::cout << 1;
    } else {
      std::cout << 4;
    }
  } else {
    if (y > 0) {
      std::cout << 2;
    } else {
      std::cout << 3;
    }
  }

  return 0;
}

