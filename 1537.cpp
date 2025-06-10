#include <iostream>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    int total = 0;
    int extra = 0;

    for (int i = 0; i != n; ++i)
    {
        int temp;
        cin >> temp;

        total += temp;
    }

    while (total != n)
    {
        n++;
        extra++;

        int diff = n - total;
        if (diff == 0)
        {
            break;
        }
        else if (diff > 0)
            total += abs(diff);
    }

    cout << extra << "\n";
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}