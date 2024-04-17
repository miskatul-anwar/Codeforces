#include <bits/stdc++.h>
using namespace std;
int main(void) {
  float x, p;
  cin >> x >> p;
  cout << fixed << setprecision(2) << p / (1 - (x / 100)) << endl;
  return 0;
}
