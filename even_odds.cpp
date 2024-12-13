#include <iostream>
typedef long long ll;
int main(int argc, char *argv[]) {
  ll n, k;
  std::cin >> n >> k;
  ll count_odds = (n + 1) / 2;
  if (k <= count_odds) {
    std::cout << 2 * k - 1 << '\n';
  } else {
    std::cout << 2 * (k - count_odds) << '\n';
  }
  return 0;
}
