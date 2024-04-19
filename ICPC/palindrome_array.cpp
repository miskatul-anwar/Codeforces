#include <bits/stdc++.h>
using namespace std;
int main(void) {
  int n;
  cin >> n;
  vector<int> v(n, 0);
  int i = 0, j = v.size() - 1, check = 1;
  for (int i = 0; i < n; i++) {
    int tmp;
    cin >> tmp;
    v[i] = tmp;
  }
  while (i < j) {
    if (v[i] != v[j]) {
      check = 0;
    }
    i++, j--;
  }
  check ? cout << "YES" << endl : cout << "NO" << endl;
  return 0;
}
