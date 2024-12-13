#include "bits/stdc++.h"
using namespace std;
int main(int argc, char const *argv[])
{
    int a, b, c;
    cin >> a >> b >> c;
    int max = 0;
    set<int> res;
    res.insert(a + b * c);
    res.insert(a * b + c);
    res.insert(a * (b + c));
    res.insert((a + b) * c);
    res.insert(a + b + c);
    res.insert(a * b * c);
    auto last = *res.rbegin();
    cout << last;
    return 0;
}
