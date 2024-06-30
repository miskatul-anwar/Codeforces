#include "bits/stdc++.h"
using namespace std;
int main(void) {
  int n, x;
  vector<int> v;
  cin >> n;
  for (int i = 0; i < n; i++) {
    int val;
    cin >> val;
    v.push_back(val);
  }
  cin >> x;
  if (find(v.begin(), v.end(), x) == v.end()) {
    cout << "-1" << endl;
  } else {
    cout << distance(v.begin(), find(v.begin(), v.end(), x)) << endl;
  }
  return 0;
}
