#include "bits/stdc++.h"
using namespace std;
int main(void)
{
    string mesg;
    string corr = "hello";
    cin >> mesg;
    size_t j = 0;
    bool flag = false;
    for (size_t i = 0; i < mesg.size(); i++)
    {
        if (corr[j] == mesg[i])
        {
            j++;
            if (j == 5)
            {
                flag |= 1;
                break;
            }
        }
    }
    cout << (flag ? "YES\n" : "NO\n");
    return 0;
}
