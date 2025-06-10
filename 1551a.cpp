#include <iostream>
#include <cmath>

using namespace std;

void solve()
{
    long long n;
    cin >> n;

    long long one = n / 3;

    if (one + 2 * (one + 1) == n)
    {
        cout << one << " " << (one + 1) << "\n";
    }
    else if (one + 1 + 2 * one == n)
    {
        cout << (one + 1) << " " << (one) << "\n";
    }
    else
    {
        cout << one << " " << one << "\n";
    }
}

int main()
{
    int tc;
    cin >> tc;

    while (tc--)
        solve();
}