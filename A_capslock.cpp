#include <iostream>
#include <string>
using namespace std;

int main()
{
    string word;
    cin >> word;

    bool allCaps = true;
    bool capsLock = islower(word[0]);

    for (size_t i = 1; i < word.size(); i++)
    {
        if (islower(word[i]))
        {
            allCaps = false;
            capsLock = false;
            break;
        }
    }

    if (allCaps || capsLock)
    {
        for (char &c : word)
        {
            c = islower(c) ? toupper(c) : tolower(c);
        }
    }

    cout << word << endl;
    return 0;
}
