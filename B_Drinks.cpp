#include <iostream>
int main(int argc, char *argv[]) {
  int n;
  std::cin >> n;
  int temp, sum = 0;
  for (int i = 1; i <= n; i++) {
    std::cin >> temp;
    sum += temp;
  }
  std::cout << (double)sum / n;
  return 0;
}
