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
    int n, k;
    bool flag = true;
    std::cin >> n >> k;
    vi a(n);
    for (int &i : a) {
      std::cin >> i;
    }
    if (k == 1) {
      if (!std::is_sorted(a.begin(), a.end())) {
        flag = false;
      }
    }
    std::cout << (flag ? "YES\n" : "NO\n");
  }
  return 0;
}
