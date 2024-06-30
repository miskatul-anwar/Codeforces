#include <bits/stdc++.h>
using namespace std;
int main(void) {
  int n, even = 0, odd = 0, positive = 0, negative = 0;
  cin >> n;
  int array[n];
  for (int i = 0; i < n; i++) {
    cin >> array[i];
  }
  for (int i = 0; i < n; i++) {
    if (array[i] % 2 == 0) {
      even++;
    } else if (array[i] % 2 != 0) {
      odd++;
    } else if (array[i] > 0) {
      positive++;
    } else if (array[i] < 0) {
      negative++;
    }
  }
  cout << "Even: " << even << endl;
  cout << "Odd: " << odd << endl;
  cout << "Positive: " << positive << endl;
  cout << "Negative: " << negative << endl;
  return 0;
}
