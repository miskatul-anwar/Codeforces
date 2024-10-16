#include <iostream>
#include <string>
int main(int argc, char *argv[]) {
  int n;
  std::string odd = "I hate ", eve = "I love ", coj = "that ", end = "it ";
  std::cin >> n;
  for (int i = 1; i <= n; i++) {
    if (i == n and i == 1) {
      std::cout << odd;
    } else if (i % 2 != 0) {
      std::cout << (i == n ? odd : odd + coj);
    } else {
      std::cout << (i == n ? eve : eve + coj);
    }
  }
  std::cout << end << '\n';
  return 0;
}
