#include <iostream>
int main(int argc, char *argv[]) {
  int t;
  std::cin >> t;
  while (t--) {
    int h, w;
    std::cin >> h >> w;
    if (h == w) {
      std::cout << "Square" << '\n';
    } else {
      std::cout << "Rectangle" << '\n';
    }
  }
  return 0;
}
