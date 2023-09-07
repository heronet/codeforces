#include <iostream>

int main() {
    std::string str;
    std::cin >> str;
    if(!std::isupper(str[0])) {
        str[0] = toupper(str[0]);
    }
    std::cout << str << std::endl;
}
