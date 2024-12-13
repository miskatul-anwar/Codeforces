#include "iostream"
#include "string"
#include "vector"
using namespace std;
int main(void)
{
    string in;
    cin >> in;
    vector<char> inc;
    for (size_t i = 0; i < in.length(); i++)
    {
        if (in[i] < 'a')
        {
            in[i] += 32;
        }
        if (in[i] == 'a' or
            in[i] == 'e' or
            in[i] == 'o' or
            in[i] == 'i' or
            in[i] == 'y' or
            in[i] == 'u')
        {
            continue;
        }
        else
        {
            inc.emplace_back('.');
            inc.emplace_back(in[i]);
        }
    }
    for (size_t i = 0; i < inc.size(); i++)
    {
        cout << inc[i];
    }
    cout << '\n';
    return 0;
}