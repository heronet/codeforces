#include <iostream>

int main() {
    int dump;
    std::cin >> dump;
    std::string s;
    std::cin >> s;
    
    int count = 0;
    for(auto it = s.cbegin(); it != s.cend(); ++it) {
        if(it != s.cend() - 1) {
            if (*it == *(it + 1))
                ++count;
        }
    }
    std::cout << count << std::endl;
}
