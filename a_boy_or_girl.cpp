#include "bits/stdc++.h"
using namespace std;
int main(void) {
  string s;
  getline(cin, s);
  s.length() % 2 == 0 ? cout << "CHAT WITH HER!" : cout << "IGNORE HIM!";
  return 0;
}
