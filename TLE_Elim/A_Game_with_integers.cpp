#include <iostream>
#define fast_io                                                                \
  std::ios::sync_with_stdio(false);                                            \
  std::cin.tie(nullptr);

int main(int argc, char *argv[]) {
  int t;
  std::cin >> t;
  while (t--) {
    int n;
    std::cin >> n;
    if ((n - 1) % 3 == 0 or (n + 1) % 3 == 0) {
      std::cout << "First\n";
    } else {
      std::cout << "Second\n";
    }
  }
  return 0;
}
