#include <bits/stdc++.h>
using namespace std;

void Solution(int n, string s) {
  int up_count = 0;
  for (char c : s) {
    if (c == 'U') {
      up_count++;
    }
  }
  if (up_count % 2 == 1) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    string s;
    cin >> n >> s;
    Solution(n, s);
  }
  return 0;
}
