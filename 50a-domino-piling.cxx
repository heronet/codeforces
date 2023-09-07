#include <iostream>

int main() {
    int arr[2];
    std::cin >> arr[0] >> arr[1];
    
    int area = arr[0] * arr[1];

    while (true) {
        if (area % 2 == 0) {
            std::cout << (area / 2) << std::endl;
            return 0;
        }
        else
            --area; 
    }
}
