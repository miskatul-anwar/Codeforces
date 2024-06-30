#include <iostream>

int main(int argc, char *argv[]) {
  long long int a, b, c;

  std::cin >> a >> b >> c;
  long long int del = a - b;
  long long int result = b + (c - 1) * del;

  std::cout << result << std::endl;
  return 0;
}
