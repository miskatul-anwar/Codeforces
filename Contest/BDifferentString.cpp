#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    string s;
    cin >> s;
    int n = s.size();
    unordered_set<char> charSet(s.begin(), s.end());
    if (charSet.size() == 1) {
      cout << "NO" << endl;
    } else {
      cout << "YES" << endl;
      if (n == 2 && s[0] == s[1]) {
        cout << s[1] << s[0] << endl;
      } else {
        cout << s.substr(1) << s[0] << endl;
      }
    }
  }
  return 0;
}

