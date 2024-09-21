#include <iostream>
#include <vector>
using namespace std;

typedef long long ll;
typedef vector<ll> vl;

void solve(int test) {
  int n;
  cin >> n;

  vl a(n);
  for (int i = 0; i < n; ++i) {
    cin >> a[i];
  }

  ll ans = 0, m = 0;

  for (int it = 1; it < n; ++it) {
    if (a[it] < a[it - 1]) {
      ans += a[it - 1] - a[it];
      m = max(m, a[it - 1] - a[it]);
      a[it] = a[it - 1];
    }
  }

  ans += m;

  cout << ans << '\n';
}

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
  int test;
  cin >> test;
  for (int it = 1; it <= test; ++it) {
    solve(it);
  }
  return 0;
}
