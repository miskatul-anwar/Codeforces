#include "bits/stdc++.h"
using namespace std;
int main(void) {
  int i;
  cin >> i;
  string s = to_string(i);
  s = s.substr(0, 1);
  int first_digit = stoi(s);
  if (first_digit % 2 == 0) {
    cout << "EVEN" << endl;
  } else {
    cout << "ODD" << endl;
  }
  return 0;
}
