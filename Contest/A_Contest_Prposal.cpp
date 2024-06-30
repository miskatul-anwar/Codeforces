#include <bits/stdc++.h>
#define fast                                                                   \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
using namespace std;
typedef long long int ll;

int main() {
  fast;
  long long int t;
  cin >> t;
  while (t--) {
    ll n;
    cin >> n;
    vector<ll> v1(n);
    vector<ll> v2(n);
    for (ll i = 0; i < n; i++) {
      cin >> v1[i];
    }
    for (ll i = 0; i < n; i++) {
      cin >> v2[i];
    }
    ll j = 0, count = 0;
    for (ll i = 0; i < n; i++) {
      if (v1[i] > v2[j++]) {
        count++;
        i--;
      }
      if (j > n - 1) {
        break;
      }
    }
    cout << count << endl;
  }
}
