#include <algorithm>
#include <iostream>
#include <vector>

int main() {
    std::string input;
    std::cin >> input;
    std::vector<int> nums;
    
    for(char ch: input) {
        if(isdigit(ch)) {
            nums.push_back(ch - '0');
        }
    }
    std::sort(nums.begin(), nums.end());
    for(std::vector<int>::const_iterator it = nums.cbegin(); it != nums.cend(); ++it){
        std::cout << *it;
        if(it != nums.cend() - 1)
            std::cout << "+";
    }
    std::cout << std::endl;
}
