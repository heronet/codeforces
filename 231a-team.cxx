#include <iostream>

int main()
{
    int n;
    std::cin >> n;
    int count = 0;
    while (n--)
    {
        int x[3];
        std::cin >> x[0] >> x[1] >> x[2];
        if (x[0] + x[1] + x[2] > 1)
            ++count;
    }
    std::cout << count << std::endl;
}