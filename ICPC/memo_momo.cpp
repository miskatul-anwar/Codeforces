#include "bits/stdc++.h"
using namespace std;
int main(void) {
  long long a, b, k;
  cin >> a >> b >> k;
  if (a % k == 0 and b % k == 0) {
    cout << "Both" << endl;
  } else if (b % k == 0 and a % k != 0) {
    cout << "Momo" << endl;
  } else if (a % k == 0 and b % k != 0) {
    cout << "Memo" << endl;
  } else {
    cout << "No One" << endl;
  }
  return 0;
}
