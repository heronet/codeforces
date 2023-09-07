#include <iostream>
#include <set>

int main() {
    std::string s;
    std::cin >> s;
    std::set<char> set(s.cbegin(), s.cend());
    if(set.size() % 2)
        std::cout << "IGNORE HIM!" << std::endl;
    else
        std::cout << "CHAT WITH HER!" << std::endl;
}
