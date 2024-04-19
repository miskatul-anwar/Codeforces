#include "bits/stdc++.h"
using namespace std;
int main(void) {
  set<int> s;
  int n, k, cnt = 0;
  cin >> n >> k;
  for (int i = 0; i < n; i++) {
    int x;
    cin >> x;
    s.insert(x);
  }
  for (auto it : s) {
    if (cnt == k) {
      break;
    }
    cout << it << " ";
    cnt++;
  }
  return 0;
}
