#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> vec;

    for (int i = 0; i != 2 * n; ++i)
    {
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }

    int odds = count_if(vec.cbegin(), vec.cend(), [](int x)
                        { return x % 2; });
    int evens = 2 * n - odds;

    if (odds == evens)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}