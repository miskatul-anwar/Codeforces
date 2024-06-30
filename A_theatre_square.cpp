#include "bits/stdc++.h"
#define fast                                                                   \
  ios_base::sync_with_stdio(false);                                            \
  cin.tie(NULL);
using namespace std;
typedef long long ll;
typedef double db;
int main(void) {
  fast;
  ll n, m, a;
  cin >> n >> m >> a;
  ll num_length = ceil((db)n / a);
  ll num_width = ceil((db)m / a);
  cout << num_length * num_width << endl;
  return 0;
}
