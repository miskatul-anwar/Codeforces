#include "bits/stdc++.h"
typedef long long ll;
using namespace std;

void fibonacci(int number);

int main() {
  int N;
  cin >> N;
  fibonacci(N);
  return 0;
}

void fibonacci(int number) {
  if (number == 0) {
    cout << "0" << endl;
    return;
  }
  int fib1 = 0, fib2 = 1;
  if (number >= 1) {
    cout << fib1 << " ";
  }
  if (number >= 2) {
    cout << fib2 << " ";
  }
  for (int i = 0; i < number; i++) {
    int fib_next = fib1 + fib2;
    cout << fib_next << " ";
    fib1 = fib2;
    fib2 = fib_next;
  }
  cout << endl;
  return;
}
