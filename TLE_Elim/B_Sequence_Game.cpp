#include <iostream>
#include <vector>
using ll = long long;
using vi = std::vector<long long>;
int main(void) {
  int t;
  std::cin >> t;
  while (t--) {
    int n;
    std::cin >> n;
    vi arr(n);
    for (ll &i : arr) {
      std::cin >> i;
    }
    vi ans;
    ans.push_back(arr[0]);
    for (ll i = 1; i < n; i++) {
      if (arr[i - 1] <= arr[i]) {
        ans.push_back(arr[i]);
      } else {
        ans.push_back(1);
        ans.push_back(arr[i]);
      }
    }
    std::cout << ans.size() << '\n';
    for (ll i : ans) {
      std::cout << i << " ";
    }
    std::cout << '\n';
  }
  return 0;
}
