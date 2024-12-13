#include "string"
#include "iostream"
#define fast                          \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL);
using namespace std;

int main(void)
{
    int t, n;
    int open, close, ans;
    string input;
    cin >> t;
    while (t--)
    {
        open = close = ans = 0;
        cin >> n >> input;
        for (size_t i = 0; i < n; i++)
        {
            if (input[i] == '(')
            {
                open++;
            }
            else
            {
                close++;
            }
            if (close > open)
            {
                ans++,
                    close--;
            }
        }
        std::cout << ans << '\n';
    }
    return 0;
}
