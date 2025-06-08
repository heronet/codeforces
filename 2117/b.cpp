#include <iostream>
#include <vector>
#include <deque>

using namespace std;

void solve()
{
    int n;
    cin >> n;

    vector<int> vec;

    for (int i = n; i >= 1; --i)
    {
        vec.push_back(i);
    }

    deque<int> vec2 = {};

    bool front = true;

    for (int i = 0; i != vec.size(); ++i)
    {
        if (front)
        {
            vec2.push_front(vec[i]);
        }
        else
        {
            vec2.push_back(vec[i]);
        }

        front = !front;
    }

    for (const int v : vec2)
        cout << v << " ";

    cout << "\n";
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