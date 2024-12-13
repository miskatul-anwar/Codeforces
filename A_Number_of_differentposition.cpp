#include "bits/stdc++.h"
using namespace std;
int main(void)
{
    int n, a, b;
    cin >> n >> a >> b;
    int pos = max(0, (n - b) - (a + 1) + 1);
    cout << pos << '\n';
    return 0;
}
