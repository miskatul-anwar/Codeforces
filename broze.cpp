#include "bits/stdc++.h"
using namespace std;
int main(void) {
  string s;
  string ans;
  cin >> s;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '.') {
      ans += '0';
    } else if (s[i] == '-' and s[i + 1] == '.') {
      ans += '1';
      i++;
    } else if (s[i] == '-' and s[i + 1] == '-') {
      ans += '2';
      i++;
    }
  }
  cout << ans << endl;
  return 0;
}
