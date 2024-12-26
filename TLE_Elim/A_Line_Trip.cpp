#include <algorithm>
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
    int n, x;
    std::cin >> n >> x;
    vi a(n);
    for (int &i : a) {
      std::cin >> i;
    }
    int max_dist = std::max(a[0] - 0, 2 * (x - a[n - 1]));
    for (int i = 1; i < n; i++) {
      max_dist = std::max(max_dist, a[i] - a[i - 1]);
    }
    std::cout << max_dist << '\n';
  }
  return 0;
}
