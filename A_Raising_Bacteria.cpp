#include <iostream>
int main(int argc, char *argv[]) {
  int x, count = 0;
  std::cin >> x;
  while (x > 0) {
    if (x & 1) {
      count++;
    }
    x >>= 1;
  }
  std::cout << count << '\n';
  return 0;
}
