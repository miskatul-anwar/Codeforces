#include <iostream>
#include <vector>

using vi = std::vector<int>;

int find_min(vi &a) {
  int min = a[0];
  for (int i : a) {
    min = (min > i ? i : min);
  }
  return min;
}

int main() {
  int n;
  std::cin >> n;

  bool contains_zero = false;
  vi a(n);
  for (int &i : a) {
    std::cin >> i;
    if (i == 0) {
      contains_zero = true;
    }
    if (i < 0) {
      i *= (-1);
    }
  }
  if (contains_zero) {
    std::cout << 0 << '\n';
  } else {
    std::cout << find_min(a) << '\n';
  }
  return 0;
}
