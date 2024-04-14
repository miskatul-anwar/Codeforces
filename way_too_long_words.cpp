#include <bits/stdc++.h>
using namespace std;
int main(void) {
  int t;
  cin >> t;
  while (t--) {
    string str;
    cin >> str;
    int n = str.length();
    n <= 10 ? cout << str << endl
            : cout << str[0] << n - 2 << str[n - 1] << endl;
  }
  return 0;
}
