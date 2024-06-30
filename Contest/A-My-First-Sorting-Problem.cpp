#include "bits/stdc++.h"
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int x, y;
    cin >> x >> y;
    set<int> s;
    s.insert(x);
    s.insert(y);
    cout << *s.begin() << " " << *s.rbegin() << endl;
  }
  return 0;
}
