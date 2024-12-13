#include "bits/stdc++.h"
using namespace std;
int main (void) {
  int n;
  bool flag = false;
  cin >> n;
  vector<int> vi(n,0);
  for (int & i: vi) {
   cin >> i; 
  }
  sort(vi.begin(),vi.end());
  for (size_t i = 2; i < n; i++) {
    if (vi[i-1]+vi[i-2]>vi[i]) {
     flag  = true;
     break;
    }
  }
  cout << (flag ? "YES\n":"NO\n");
  return 0;
}
