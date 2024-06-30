#include "bits/stdc++.h"
using namespace std;
void constructSequence(int n, int k) {
  vector<int> sequence(n, 0);
  for (int i = 0; i < n - 1; i++) {
    sequence[i] = 1;
    k--;
  }
  sequence[n - 1] = k;
  for (int i = 0; i < n; i++) {
    cout << sequence[i] << " ";
  }
  cout << endl;
}
int main(void) {
  int t;
  cin >> t;
  while (t--) {
    int n, k;
    cin >> n >> k;
    constructSequence(n, k);
  }
  return 0;
}
