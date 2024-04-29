#include "bits/stdc++.h"
using namespace std;
#define fast                                                                   \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
typedef long long ll;

void sol(void) {
  ll n, k;
  cin >> n >> k;
  ll arr[101] = {};
  ll ans = n;
  for (ll i = 0; i < n; i++) {
    ll temp;
    cin >> temp;
    arr[temp]++;
  }
  for (ll &i : arr) {
    if (i >= k) {
      cout << k - 1;
      return;
    }
  }
  cout << n;
}

int main() {
  fast;
  ll q;
  cin >> q;
  while (q--) {
    sol();
    cout << "\n";
  }
  return 0;
}
