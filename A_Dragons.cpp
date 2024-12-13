#include "bits/stdc++.h"
using namespace std;
int main(void)
{
    int s, n, x, y;
    cin >> s >> n;
    multimap<int, int> dragons;
    for (int i = 0; i < n; i++)
    {
        cin >> x >> y;
        dragons.insert({x, y});
    }

    bool canMove = true;
    for (auto dragon = dragons.begin();
         dragon != dragons.end() and canMove;
         dragon++)
    {
        s > dragon->first ? s += dragon->second : canMove = false;
    }
    std::cout << (canMove ? "YES\n" : "NO\n");
    return 0;
}
