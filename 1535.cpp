#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void solve()
{

    vector<int> vec;

    for (int i = 0; i != 4; ++i)
    {
        int temp;
        cin >> temp;
        vec.push_back(temp);
    }

    int a = max(vec[0], vec[1]);
    int b = max(vec[2], vec[3]);

    sort(vec.begin(), vec.end());

    if ((a == vec[2] && b == vec[3]) || (b == vec[2] && a == vec[3]))
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
    int tc;
    cin >> tc;
    while (tc--)
        solve();
}