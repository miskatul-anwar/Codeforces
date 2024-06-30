
#include <bits/stdc++.h>
using namespace std;

void solve(const string &s) {
  int n = s.size();
  int count = 1;
  int target = 0;
  for (int i = 1; i < n; i++) {
    if (s[i] == s[i - 1]) {
      continue;
    } else {
      count++;
    }
    if (s[i - 1] == '0' && s[i] == '1') {
      target = 1;
    }
  }
  int ans = count - target;
  cout << ans << endl;
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    string s;
    cin >> s;
    solve(s);
  }
  return 0;
}
