#include <algorithm>
#include <iostream>

// Function to calculate the sum of the first n natural numbers
long long sumOfFirstN(long long n) { return n * (n + 1) / 2; }

// Function to calculate the sum of even numbers up to n
long long sumOfEvens(long long n) {
  long long count = n / 2;
  return count * (count + 1);
}

// Function to calculate the sum of odd numbers up to n
long long sumOfOdds(long long n) {
  long long count = (n + 1) / 2;
  return count * count;
}

int main() {
  long long a, b;
  std::cin >> a >> b;

  if (a > b) {
    std::swap(a, b);
  }

  // Sum of all numbers from 1 to b
  long long totalSumB = sumOfFirstN(b);
  // Sum of all numbers from 1 to a-1
  long long totalSumA = sumOfFirstN(a - 1);
  // Sum of all numbers between a and b
  long long totalSum = totalSumB - totalSumA;

  // Sum of even numbers from 1 to b
  long long evenSumB = sumOfEvens(b);
  // Sum of even numbers from 1 to a-1
  long long evenSumA = sumOfEvens(a - 1);
  // Sum of even numbers between a and b
  long long evenSum = evenSumB - evenSumA;

  // Sum of odd numbers from 1 to b
  long long oddSumB = sumOfOdds(b);
  // Sum of odd numbers from 1 to a-1
  long long oddSumA = sumOfOdds(a - 1);
  // Sum of odd numbers between a and b
  long long oddSum = oddSumB - oddSumA;

  std::cout << totalSum << '\n' << evenSum << '\n' << oddSum << '\n';

  return 0;
}
