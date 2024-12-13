#include "bits/stdc++.h"
using namespace std;
int main(void)
{
    int n, tmp_x, tmp_y, tmp_z, sum_x = 0, sum_y = 0, sum_z = 0;
    cin >> n;
    while (n--)
    {
        cin >> tmp_x >> tmp_y >> tmp_z;
        sum_x += tmp_x;
        sum_y += tmp_y;
        sum_z += tmp_z;
    }
    if (sum_x == 0 and sum_y == 0 and sum_z == 0)
    {
        std::cout << "YES" << std::endl;
    }
    else
    {
        std::cout << "NO" << std::endl;
    }

    return 0;
}
