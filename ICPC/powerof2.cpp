#include <iostream>
int main(int argc, char *argv[]) {
  unsigned long long n;
  std::cin >> n;
  if (n > 0 and (n & (n - 1)) == 0) {
    std::cout << "YES" << '\n';
  } else {
    std::cout << "NO" << '\n';
  }
  return 0;
}
