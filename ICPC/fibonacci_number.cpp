#include <bits/stdc++.h>
#include <iostream>

class Solution {
private:
  void fibonacci(int n) {
    int fib1 = 0, fib2 = 1;
    if (n == 0) {
      return;
    }
    if (n >= 1) {
      std::cout << fib1 << " ";
    }
    if (n >= 2) {
      std::cout << fib2 << " ";
    }

    for (int i = 0; i < n; i++) {
      int next = fib1 + fib2;
      std::cout << next << " ";
      fib1 = fib2;
      fib2 = next;
    }
    std::cout << std::endl;
  }

public:
  void inteface(void) {
    int n;
    std::cin >> n;
    fibonacci(n);
  }
};

int main(void) {
  Solution().inteface();
  return 0;
}
