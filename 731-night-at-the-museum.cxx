#include <iostream>

int main()
{
    using namespace std;

    int total = 0;

    string s;
    cin >> s;

    char init = 'a';

    for (const char x : s)
    {
        int diff = abs(init - x);

        total += min(26 - diff, diff);

        init = x;
    }

    cout << total << endl;
}