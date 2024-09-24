#include <iostream>

// Function to calculate GCD using the Euclidean algorithm
long long gcd(long long a, long long b) {
  while (b != 0) {
    long long temp = b;
    b = a % b;
    a = temp;
  }
  return a;
}

int main() {
  long long A, B;
  std::cin >> A >> B;

  // Calculate GCD
  long long gcd_value = gcd(A, B);

  // Calculate LCM
  long long lcm_value = (A / gcd_value) * B; // Avoid overflow by dividing first

  // Output the GCD and LCM
  std::cout << gcd_value << " " << lcm_value << std::endl;

  return 0;
}
