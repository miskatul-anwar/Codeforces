#include "bits/stdc++.h"
using namespace std;
int main(void)
{
    bool almost_lucky = false;
    int n,
        lucky_numbers[] = {4, 7, 44, 47, 74, 77, 444, 447, 474, 477, 744, 747, 774, 777};
    cin >> n;
    for (int i : lucky_numbers)
    {
        if (n % i == 0)
        {
            almost_lucky = true;
            break;
        }
    }
    cout << (almost_lucky ? "YES\n" : "NO\n");
    return 0;
}
