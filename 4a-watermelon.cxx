#include <iostream>

int main() {
	int x;
	std::cin >> x;
	if(x > 2 && x % 2 == 0)
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
}
