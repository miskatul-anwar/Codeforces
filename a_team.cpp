#include <bits/stdc++.h>
using namespace std;
int main(void) {
  int n, a, b, c, t, count = 0;
  cin >> n;
  while (n--) {
    cin >> a >> b >> c;
    t = a + b + c;
    if (t > 1) {
      count++;
    }
  }
  cout << count << endl;
  return 0;
}
