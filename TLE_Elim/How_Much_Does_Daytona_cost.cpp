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
    std::cin >> n >> k;
    vi a(n);
    for (int &i : a) {
      std::cin >> i;
    }
    std::cout << (std::count(a.begin(), a.end(), k) ? "YES\n" : "NO\n");
  }
  return 0;
}
