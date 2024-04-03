#include "bits/stdc++.h"
using namespace std;
bool isperfectsquare(int n) {
  float s = sqrt(n);
  return (s * s == n);
}
int main(void) {
  int t, n;
  cin >> t;
  while (t--) {
    cin >> n;
    int a[n], cond = 0;
    for (int i = 0; i < n; i++) {
      cin >> a[i];
      if (!isperfectsquare(a[i])) {
        cond++;
      }
    }
    cond == 0 ? cout << "YES" << endl : cout << "NO" << endl;
  }
  return 0;
}
