#include <iostream>
int main(void) {
  unsigned long long int n;
  std::cin >> n;
  unsigned long long int i = 1, sum = 0, cnt = 0;
  while (sum + i <= n) {
    sum += i++, cnt++;
  }
  std::cout << cnt;
  return 0;
}
