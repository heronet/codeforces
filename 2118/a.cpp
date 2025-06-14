#include <iostream>

using namespace std;

void solve()
{
    int n, k;
    cin >> n >> k;

    string s;

    for (int i = 0; i != k; ++i)
        s.push_back('1');
    for (int i = 0; i != (n - k); ++i)
        s.push_back('0');

    cout << s << endl;
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