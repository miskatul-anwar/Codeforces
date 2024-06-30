#include <bits/stdc++.h>
using namespace std;
int main(void) {
  int t;
  cin >> t;
  while (t--) {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b > a and c > a and d > a) {
      cout << "3" << endl;
    } else if (b > a and c > a and d < a) {
      cout << "2" << endl;
    } else if (b > a and c < a and d > a) {
      cout << "2" << endl;
    } else if (b < a and c > a and d > a) {
      cout << "2" << endl;
    } else if (b > a and c < a and d < a) {
      cout << "1" << endl;
    } else if (b < a and c > a and d < a) {
      cout << "1" << endl;
    } else if (b < a and c < a and d > a) {
      cout << "1" << endl;
    } else if (b < a and c < a and d < a) {
      cout << "0" << endl;
    }
  }
  return 0;
}
