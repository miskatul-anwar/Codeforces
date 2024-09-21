#include <iostream>
int main(int argc, char *argv[]) {
  int t;
  std::cin >> t;
  while (t--) {
    int n, k;
    std::cin >> n >> k;
    int secs = 0;
    while (n-- > 1) {
      secs += k;
    }
    secs++;
    std::cout << secs << '\n';
  }
  return 0;
}
