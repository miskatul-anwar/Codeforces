#include <bits/stdc++.h>
using namespace std;
int main(void) {
  long long n, sum = 0;
  cin >> n;
  while (n--) {
    long long x;
    cin >> x;
    sum += x;
  }
  cout << abs(sum) << endl;
  return 0;
}
