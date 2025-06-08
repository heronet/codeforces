#include <iostream>
#include <vector>

using namespace std;

void solve()
{
    int n, x;
    cin >> n >> x;

    vector<int> s;
    for (int i = 0; i != n; ++i)
    {
        int temp;
        cin >> temp;
        s.push_back(temp);
    }

    for (int i = 0; i != n; ++i)
    {
        if (s[i] == 1)
        {
            if (x > 0)
            {
                i += x - 1;
                x = 0;
            }
            else
            {
                cout << "NO\n";
                return;
            }
        }

        if (i >= n)
        {
            cout << "YES\n";
            return;
        }
    }

    cout << "YES\n";
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;

    while (tc--)
    {
        solve();
    }
}