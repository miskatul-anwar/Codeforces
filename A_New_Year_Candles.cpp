#include <iostream>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;

    int ans = 0;
    int leftovers = 0;

    while (a > 0)
    {
        ans += a;
        int newCandles = (a + leftovers) / b;
        leftovers = (a + leftovers) % b;
        a = newCandles;
    }

    cout << ans << '\n';
    return 0;
}
