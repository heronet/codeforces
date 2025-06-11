#include <iostream>
#include <unordered_map>

using namespace std;

unordered_map<int, int> map;

void solve()
{
    int count = 0;
    for (int i = 1; i <= 1667; ++i)
    {
        if ((i % 3 != 0) && (i % 10 != 3))
            map[count++] = i;
    }
}

int main()
{
    solve();

    int tc;
    cin >> tc;
    while (tc--)
    {
        int n;
        cin >> n;

        cout << map[n - 1] << "\n";
    }
}