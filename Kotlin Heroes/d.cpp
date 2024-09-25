#include <iostream>
#include <map>
typedef long long ll;
int main(int argc, char *argv[]) {
  int t;
  std::cin >> t;
  while (t--) {
    int n;
    std::cin >> n;
    std::map<int, ll> freq;
    for (int i = 0; i < n; i++) {
      int curr;
      std::cin >> curr;
      freq[curr]++;
    }
    ll ans = 0;
    ll runningSum = 0;
    for (auto val : freq) {
      ll num = val.second;
      if (num >= 3) {
        ans += (num * (num - 1) * (num - 2)) / 6;
      }
      if (num >= 2) {
        ans += num * (num - 1) * runningSum / 2;
      }
      runningSum += num;
    }
    std::cout << ans << '\n';
  }
  return 0;
}
