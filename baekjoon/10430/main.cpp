#include <iostream>

int main() {
  unsigned A;
  unsigned B;
  unsigned C;

  std::cin >> A >> B >> C;

  std::cout << (A + B) % C << std::endl;
  std::cout << ((A % C) + (B % C)) % C << std::endl;
  std::cout << (A * B) % C << std::endl;
  std::cout << ((A % C) * (B % C)) % C << std::endl;

  return 0;
}

