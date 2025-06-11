#include <iostream>
#include <unordered_set>
#include <algorithm>

using namespace std;

bool is_pal(const string &str)
{
    string::size_type len = str.length();

    for (int i = 0; i != len / 2; ++i)
    {
        if (str[i] != str[len - 1 - i])
        {
            return false;
        }
    }
    return true;
}

void solve()
{
    string s;
    cin >> s;

    unordered_set<char> mset(s.begin(), s.end());

    if (mset.size() == 1 && *mset.begin() == 'a')
    {
        cout << "NO\n";
    }
    else
    {
        cout << "YES\n";

        string str = s;

        if (!is_pal(s + "a"))
        {
            cout << s << "a\n";
        }
        else
        {
            cout << "a" << s << "\n";
        }
    }
}

int main()
{

    int tc;
    cin >> tc;
    while (tc--)
    {
        solve();
    }
}