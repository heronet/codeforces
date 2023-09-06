#include <iostream>

int main()
{
    int x, y;
    std::cin >> x >> y;
    int count = 0;
    int min = 0;
    for (int i = 1; i <= x; ++i)
    {
        int temp;
        std::cin >> temp;
        if (i < y && temp > 0)
            ++count;
        if (i == y)
        {
            min = temp;
        }
        if (min == temp && min > 0)
            ++count;
    }
    std::cout << count << std::endl;
}