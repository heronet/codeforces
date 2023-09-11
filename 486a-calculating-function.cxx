#include <iostream>

int main() {
	long long x;
	std::cin >> x;
	if(x % 2) {
		std::cout << -(x + 1) / 2 << std::endl;
	} else {
		std::cout << x / 2 << std::endl;
	}
}
