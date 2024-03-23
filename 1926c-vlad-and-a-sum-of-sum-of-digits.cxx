#include <iostream>
#include <unordered_map>

long long totals[200001] = {0};

int main()
{
    for (long long i = 1; i <= 200000; ++i)
    {

        long long sub = 0;
        long long curr = i;

        while (curr > 0)
        {
            sub += (curr % 10);
            curr /= 10;
        }

        totals[i] = totals[i - 1] + sub;
    }

    int tc;
    std::cin >> tc;

    while (tc--)
    {
        int n;
        std::cin >> n;
        std::cout << totals[n] << std::endl;
    }
}