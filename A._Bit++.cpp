#include "bits/stdc++.h"
#define fast                                                                   \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);                                                               \
  cout.tie(NULL);
using namespace std;

int main() {
  fast;
  int t, val = 0;
  string s;
  cin >> t;
  while (t--) {
    cin >> s;
    if (find(s.begin(), s.end(), '+') != s.end()) {
      val++;
    } else {
      val--;
    }
  }
  cout << val << endl;
  return 0;
}
