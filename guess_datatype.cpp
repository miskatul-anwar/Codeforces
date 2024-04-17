#include <bits/stdc++.h>
using namespace std;

int main(void) {
  double a, b, c;
  cin >> a >> b >> c;
  double res = (a * b) / c;
  long long res2 = res;
  double diff = res - res2;
  if (diff) {
    cout << "double" << endl;
  }
  if (res2 <= 2147483647) {
    cout << "int" << endl;
  } else {
    cout << "long long" << endl;
  }
  return 0;
}
