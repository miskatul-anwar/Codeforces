#include "bits/stdc++.h"
using namespace std;
int main(void) {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    map<int, int> mp;
    while (n--) {
      int x;
      cin >> x;
      ++mp[x];
    }
    int cnt = 0;
    for (auto it = mp.begin(); it != mp.end(); ++it) {
      cnt += it->second / 3;
    }
    cout << cnt << endl;
  }
}
