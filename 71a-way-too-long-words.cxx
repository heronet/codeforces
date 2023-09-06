#include <iostream>

int main()
{
    int tc;
    std::cin >> tc;
    while (tc--)
    {
        std::string word;
        std::cin >> word;
        size_t len = word.size();
        if (len <= 10)
            std::cout << word << std::endl;
        else
        {
            std::string n_str;
            n_str.push_back(word[0]);
            n_str.append(std::to_string(len - 2));
            n_str.push_back(word[len - 1]);
            std::cout << n_str << std::endl;
        }
    }
}