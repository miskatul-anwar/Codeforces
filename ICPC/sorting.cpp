#include "bits/stdc++.h"
using namespace std;
int main(void) {
  int n;
  cin >> n;
  set<int> s;
  for (int i = 0; i < n; i++) {
    long long tmp;
    cin >> tmp;
    s.insert(tmp);
  }
  for (auto it : s) {
    cout << it << " ";
  }
  return 0;
}
