#include <bits/stdc++.h>

#define ll long long
using namespace std;
int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  ll tc;
  cin >> tc;
  while (tc--) {
    ll a, b, c, d;
    cin >> a >> b >> c >> d;
    bool flag1 = false, flag2 = false;
    ll tmp = max(a, b);
    a = min(a, b);
    b = tmp;
    for (int i = a; i <= b; i++)

    {

      if (c == i)

      {

        flag1 = true;
      }

      if (d == i)

      {

        flag2 = true;
      }
    }

    if ((flag1 && flag2) || (!flag1 && !flag2))

    {

      cout << "NO" << '\n';

    }

    else

    {

      cout << "YES" << '\n';
    }
  }

  return 0;
}
