#include <algorithm>
#include <climits>
#include <iostream>
#include <vector>
int main(int argc, char *argv[]) {
  std::ios_base::sync_with_stdio(false);
  std::cin.tie(0);
  int t;
  std::cin >> t;
  while (t--) {
    int size;
    std::cin >> size;
    std::vector<int> num(size);
    for (int i = 0; i < size; i++) {
      std::cin >> num[i];
    }
    int last = num[size - 1], max_val = LLONG_MAX;
    for (int i = 0; i < size - 1; i++) {
      max_val = std::max(max_val, num[i]);
    }
    std::cout << max_val + last << '\n';
  }
  return 0;
}
