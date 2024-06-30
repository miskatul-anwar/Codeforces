#include <algorithm>
#include <iostream>
#include <map>
#include <string>
#include <vector>
std::vector<int> maxMin(std::vector<int> &a) {
  std::map<int, int> track;
  int max = a[0], min = a[0], prime = 0, palindrome = 0;
  for (int i = 0; i < a.size(); i++) {
    std::string tmp = std::to_string(a[i]);
    std::reverse(tmp.begin(), tmp.end());
    if (tmp == std::to_string(a[i])) {
      palindrome++;
    }
    int cnt = 0;
    for (int j = 2; j * j <= a[i]; j++) {
      if (a[i] % j == 0 and a[i] > 1) {
        cnt++;
      }
    }
    if (track.find(cnt) != track.end()) {
      if (track[cnt] < a[i]) {
        track[cnt] = a[i];
      }
    } else {
      track[cnt] = a[i];
    }
    if (a[i] > max) {
      max = a[i];
    }
    if (a[i] < min) {
      min = a[i];
    }
    if (cnt == 0 and a[i] > 1) {
      prime++;
    }
  }
  auto maxDiv = track.rbegin();
  return {max, min, prime, palindrome, maxDiv->second};
}
int main(int argc, char *argv[]) {
  int n, i = 0;
  std::cin >> n;
  std::vector<int> a(n);

  while (i < a.size()) {
    std::cin >> a[i++];
  }

  std::vector<int> ans = maxMin(a);
  std::cout << "The maximum number : " << ans[0] << '\n';
  std::cout << "The minimum number : " << ans[1] << '\n';
  std::cout << "The number of prime numbers : " << ans[2] << '\n';
  std::cout << "The number of palindrome numbers : " << ans[3] << '\n';
  std::cout << "The number that has the maximum number of divisors : " << ans[4]
            << '\n';
  return 0;
}
