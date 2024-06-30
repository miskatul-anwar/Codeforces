#include <algorithm>
#include <iostream>

int main(int argc, char *argv[]) {
  long long a, b;
  std::cin >> a >> b;

  if (a > b) {
    std::swap(a, b);
  }

  // Sum of all numbers from 1 to b
  long long sum1 = b * (b + 1) / 2;
  // Sum of all numbers from 1 to (a-1)
  long long sum2 = (a - 1) * a / 2;
  // Sum of all numbers between a and b
  long long sum = sum1 - sum2;

  // Sum of even numbers from 1 to b
  long long even1 = (b / 2) * ((b / 2) + 1);
  // Sum of even numbers from 1 to (a-1)
  long long even2 = ((a - 1) / 2) * ((a - 1) / 2 + 1);
  // Sum of even numbers between a and b
  long long even = even1 - even2;

  // Sum of odd numbers from 1 to b
  long long odd1 = ((b + 1) / 2) * ((b + 1) / 2);
  // Sum of odd numbers from 1 to (a-1)
  long long odd2 = (a / 2) * (a / 2);
  // Sum of odd numbers between a and b
  long long odd = odd1 - odd2;

  std::cout << sum << '\n' << even << '\n' << odd << '\n';

  return 0;
}
