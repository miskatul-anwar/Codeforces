#include <iostream>
#include <vector>

typedef long long ll;

#define LIMIT 1000000 // Preprocessor directive to define the limit
#define INPUT_AND_CALCULATE_SUM(n)                                             \
  {                                                                            \
    ll sum = 0;                                                                \
    for (int i = 1; i <= n / 2; i++) {                                         \
      if (n % i == 0) {                                                        \
        sum += i;                                                              \
      }                                                                        \
    }                                                                          \
    sum += n;                                                                  \
    sum_of_divisors[n] = sum;                                                  \
  }

ll sum_of_divisors[LIMIT + 1]; // Global array to hold the sum of divisors

int main() {
  // Precompute the sum of divisors for each number using the macro
  for (int i = 1; i <= LIMIT; i++) {
    INPUT_AND_CALCULATE_SUM(
        i); // Use macro to calculate sum and store it in the array
  }

  // Example: Output the sum of divisors for numbers from 1 to 10
  for (int i = 1; i <= 10; i++) {
    std::cout << "Sum of divisors of " << i << " = " << sum_of_divisors[i]
              << '\n';
  }

  return 0;
}
