#include <iostream>
#include <string>
#define fast_io                                                                \
  std::ios::sync_with_stdio(false);                                            \
  std::cin.tie(nullptr);

using str = std::string;

int main() {
  fast_io;
  int t;
  std::cin >> t;
  while (t--) {
    int n;
    str s;
    std::cin >> n >> s;
    bool check = true;
    int cnt = 0;
    for (int i = 0; i < n; i++) {
      if (s[i] == '.') {
        cnt++;
      }
      if (i > 0 and i < n - 1) {
        if (s[i - 1] == '.' and s[i] == '.' and s[i + 1] == '.') {
          std::cout << 2 << '\n';
          check = false;
          break;
        }
      }
    }
    if (check) {
      std::cout << cnt << '\n';
    }
  }
  return 0;
}
