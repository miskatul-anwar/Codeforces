#include "bits/stdc++.h"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;
int main(void)
{
    fast;
    string s1, s2, s3;
    cin >> s1;
    s2 = s1;
    reverse(s2.begin(), s2.end());
    s3 = s1 + s2;
    std::cout << s3 << '\n';
    return 0;
}
