#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
int main(int argc, char const *argv[])
{
    ll x, n;
    cin >> n >> x;
    int ans = 0;
    for (int i = 1; i <= n; i++)
    {
        if (x % i == 0 and x / i <= n)
        {
            ans++;
        }
    }
    std::cout << ans << std::endl;
    return 0;
}
