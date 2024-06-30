#include <bits/stdc++.h>
using namespace std;
int main(void) {
  pair<int, int> a;
  cin >> a.first >> a.second;
  if (a.first > a.second) {
    cout << a.first - a.second << endl;
  } else {
    cout << "0" << endl;
  }
  return 0;
}
