#include <iostream>
#include <unordered_map>

using namespace std;

void solve()
{
    unordered_map<int, bool> map;

    int n;
    cin >> n;

    string s;
    cin >> s;

    if (n == 1)
    {
        cout << "YES" << endl;
        return;
    }

    for (int i = 1; i != n; ++i)
    {
        if (s[i] != s[i - 1])
        {
            map[s[i - 1]] = true;
        }

        if (map[s[i]])
        {
            cout << "NO" << endl;
            return;
        }
    }

    cout << "YES" << endl;
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