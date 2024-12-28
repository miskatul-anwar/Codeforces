#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    map<int, int> mp;
    vector<int> v;
    int x = 0;
    for (int i = 0; i < n; i++) {
      cin >> x;
      mp[x]++;
    }
    if (mp.size() >= 3) {
      cout << "no" << endl;

    } else if (mp.size() == 1) {
      cout << "yes" << endl;

    } else {
      for (auto it : mp)
        v.push_back(it.second);
      abs(v[0] - v[1]) >= 2 ? cout << "no" : cout << "yes";
      cout << endl;
    }
  }

  return 0;
}
