
#include "bits/stdc++.h"
using namespace std;
#define fast                                                                   \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
typedef long long ll;

void sol() {
  ll n;
  cin >> n;
  ll sum = 0;
  for (ll i = 1; i <= n; i++) {
    ll temp;
    cin >> temp;
    sum += temp;
  }
  if (n % 2 == 0 and sum % 2 == 0) {
    cout << "Bob";
    return;
  }
  cout << "Alice";
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
