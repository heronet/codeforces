#include <iostream>

int main() {
    int x = 0, y = 0;
    bool done = false;
    for(int i = 0; i != 5; ++i) {
        for(int j = 0; j != 5; ++j) {
            y = j;
            int temp;
            std::cin >> temp;
            if(temp == 1) {
                done = true;
                break;
            }
        }
        x = i;
        if(done)
            break;
    }
    int diff = std::abs(x - 2) + std::abs(y - 2);
    std::cout << diff << std::endl;
}
