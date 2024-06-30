#include <bits/stdc++.h>
using namespace std;

const int MAXN = 5e5 + 7;
int a[MAXN];
void problemA() {
  int n;
  cin >> n;
  int res = 4;
  for (int i = 1; i <= n; i++) {
    cin >> a[i];
  }
  for (int i = 1; i <= n; i++) {
    set<int> s;
    s.insert(i);
    s.insert(a[i]);
    s.insert(a[a[i]]);
    res = min(res, int(s.size()));
  }
  cout << res << endl;
}
int main() {
  int t;
  cin >> t;
  while (t--) {
    problemA();
  }
  return 0;
}
