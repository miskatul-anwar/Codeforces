#include <iostream>
int main(int argc, char *argv[]) {
  int t;
  std::cin >> t;
  while (t--) {
    int x, y;
    std::cin >> x >> y;
    std::cout << (x < y ? x : y) << " ";
    std::cout << (x > y ? x : y) << "\n";
  }
  return 0;
}
