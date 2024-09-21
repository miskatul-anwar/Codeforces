#include <cmath>
#include <iostream>
int main(int argc, char *argv[]) {
  long long r, s;

  std::cin >> r >> s;
  if (s >= r * 2) {
    std::cout << "Square" << '\n';
  } else if (r * 2 > std::sqrt(pow(s, 2) + pow(s, 2))) {
    std::cout << "Circle" << '\n';
  } else {
    std::cout << "Complex" << '\n';
  }
  return 0;
}
