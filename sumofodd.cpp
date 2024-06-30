#include <bits/stdc++.h>
using namespace std;
int SumofConsecutiveOddNumbers(int a, int b);
int main(void) {
  int a, b, t;
  cin >> t;
  for (int i = 1; i <= t; i++) {
    cin >> a >> b;
    cout << SumofConsecutiveOddNumbers(a, b) << endl;
  }
  return 0;
}
int SumofConsecutiveOddNumbers(int a, int b) {
  int sum = 0;
  for (int i = min(a, b) + 1; i < max(a, b); i++) {
    if (i % 2 != 0 and max(a, b) - min(a, b) != 1) {
      sum += i;
    }
  }
  return sum;
}
