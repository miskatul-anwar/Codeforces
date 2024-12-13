#include <algorithm>
#include <iostream>
#include <vector>
int main(int argc, char *argv[]) {
  int t, n, k, tmp;
  std::cin >> t;
  while (t--) {
    std::cin >> n >> k;
    std::vector<int> ai(n, 0);
    std::vector<int> bj(n, 0);
    for (int &i : ai) {
      std::cin >> i;
    }
    for (int &j : bj) {
      std::cin >> j;
    }
    std::sort(ai.begin(), ai.end());
    std::sort(bj.begin(), bj.end());
    int i = 0, j = n - 1;
    while (ai[i] < bj[j] and k != 0) {
      ai[i] = bj[j];
      i++, j--, k--;
    }
    int sum = 0;
    for (int i : ai) {
      sum += i;
    }
    std::cout << sum << '\n';
  }
  return 0;
}
