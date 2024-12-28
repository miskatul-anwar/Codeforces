#include <iostream>
int main() {
  int t;
  std::cin >> t;
  while (t--) {
    long n, x;
    std::cin >> n >> x;
    bool ans(x == 1);
    for (int i = 1; i < n; i++) {
      std::cin >> x;
    }
    std::cout << (ans ? "YES\n" : "NO\n");
  }
  return 0;
}
// Should be reviewed
