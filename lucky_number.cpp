#include <bits/stdc++.h>
using namespace std;
int main(void) {
  int n;
  cin >> n;
  int digit1 = n % 10;
  n /= 10;
  int digit2 = n % 10;
  if (digit1 % digit2 == 0 or digit2 % digit1 == 0) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
  return 0;
}
