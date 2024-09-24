#include <algorithm>
#include <cstddef>
#include <iostream>
#include <vector>
typedef long long ll;
typedef std::vector<ll> vll;
void asquare() {
  ll n;
  std::cin >> n;
  vll v(n);
  for (size_t i = 0; i < n; i++) {
    std::cin >> v[i];
  }
  ll left = 1;
  ll right = 1;
  for (int i = 1; i < n; i++) {
    if (v[i] != v[i - 1]) {
      break;
    }
    left++;
  }
  for (int i = n - 2; i >= 0; i--) {
    if (v[i] != v[i + 1]) {
      break;
    }
    right++;
  }
  ll sum = 0;
  if (v[0] == v[n - 1]) {
    sum = std::min(n, left + right);
  } else {
    sum = std::min(n, std::max(left, right));
  }
  std::cout << (n - sum) << "\n";
}
int main(int argc, char *argv[]) {
  int t;
  std::cin >> t;
  while (t--) {
    asquare();
  }
  return 0;
}
