#include "bits/stdc++.h"
using namespace std;
int main(void) {
  int t, r, b, d;
  cin >> t;
  while (t--) {
    cin >> r >> b >> d;
    long long x;
    if (d == 0) {
      if (r == b) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    } else {
      long long aa = max(r, b);
      long long bb = min(r, b);
      d++;
      x = bb * d;
      if (x >= aa) {
        cout << "YES" << endl;
      } else {
        cout << "NO" << endl;
      }
    }
  }
  return 0;
}
