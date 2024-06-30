#include "bits/stdc++.h"
using namespace std;
int fibonacci(int n);
void fibonacci_series(int n);
int main(void) {
  int n;
  cin >> n;
  cout << "0 ";
  fibonacci_series(n - 1);
  return 0;
}
int fibonacci(int n) {
  if (n == 0 or n == 1) {
    return n;
  }
  return fibonacci(n - 1) + fibonacci(n - 2);
}
void fibonacci_series(int n) {
  if (n == 0) {
    return;
  }
  fibonacci_series(n - 1);
  cout << fibonacci(n) << " ";
  return;
}
