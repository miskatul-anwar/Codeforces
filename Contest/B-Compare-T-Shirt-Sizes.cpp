#include "bits/stdc++.h"
using namespace std;
int main() {
  int t;
  cin >> t;
  while (t--) {
    string s1, s2;
    cin >> s1 >> s2;
    if (s1 == s2) {
      cout << "=" << endl;
    } else if (s1[s1.length() - 1] == 'S' and s2[s2.length() - 1] == 'S') {
      if (s1.length() > s2.length()) {
        cout << "<" << endl;
      } else {
        cout << ">" << endl;
      }
    } else if (s1[s1.length() - 1] == 'L' or s2[s2.length() - 1] == 'L') {
      if (s1.length() > s2.length()) {
        cout << ">" << endl;
      } else {
        cout << "<" << endl;
      }
    } else if (s1[s1.length() - 1] == 'M' and s2[s2.length() - 1] == 'S') {
      cout << ">" << endl;
    } else if (s1[s1.length() - 1] == 'S' and s2[s2.length() - 1] == 'M') {
      cout << "<" << endl;
    } else if (s1 == "M" and s2 == "L") {
      cout << "<" << endl;
    } else if (s1 == "L" and s2 == "M") {
      cout << ">" << endl;
    } else if (s1 == "M" and s2[s2.length() - 1] == 'L') {
      cout << "<" << endl;
    } else if (s1[s1.length() - 1] == 'L' and s2 == "M") {
      cout << ">" << endl;
    } else if (s1[s1.length() - 1] == 'S' and s2[s2.length() - 1] == 'L') {
      cout << "<" << endl;
    } else if (s1[s1.length() - 1] == 'L' and s2[s2.length() - 1] == 'S') {
      cout << ">" << endl;
    }
  }
  return 0;
}
