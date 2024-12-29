#include <iostream>
#include <vector>
#define fast_io                                                                \
  std::ios::sync_with_stdio(false);                                            \
  std::cin.tie(nullptr);
using vi = std::vector<int>;

int main() {
  fast_io;
  int t;
  std::cin >> t;
  while (t--) {
    int n;
    std::cin >> n;
    int sum = 0, tmp;
    for (int i = 1; i < n; i++) {
      std::cin >> tmp;
      sum += tmp;
    }
    std::cout << sum * (-1) << '\n';
  }
  return 0;
}
