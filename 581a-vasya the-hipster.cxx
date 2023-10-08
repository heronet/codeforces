#include <iostream>

int main() {
    int red, blue;
    std::cin >> red >> blue;

    int pairs = 0;

    while (red && blue) {
        --red;
        --blue;
        ++pairs;
    }

    int n_pairs = 0;

    while (red >= 2) {
        red -= 2;
        ++n_pairs;
    }

    while (blue >= 2) {
        blue -= 2;
        ++n_pairs;
    }
    
    std::cout << pairs << " " << n_pairs << std::endl;

}
