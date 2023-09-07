#include <iostream>

int main() {
    int tc;
    std::cin >> tc;
    int x = 0;
    while(tc--) {
        std::string command;
        std::cin >> command;

        if(command == "X++" || command == "++X")
            ++x;
        else if(command == "X--" || command == "--X")
            --x;
    }
    std::cout << x << std::endl;
}
