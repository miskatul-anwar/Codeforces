#include <bits/stdc++.h>
using namespace std;
int main(void) {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    string str;
    cin >> str;
    int ans = 0;
    map<char, int> mp;
    for (int i = 0; i < str.length(); i++) {
      mp[str[i]]++;
      char z = str[i];
      while (str[i] == z) {
        i++;
      }
      i--;
      if (mp[z] > 1) {
        ans = 1;
      }
    }
    if (ans == 1) {
      cout << "NO\n";
    } else {
      cout << "YES\n";
    }
  }
  return 0;
}
