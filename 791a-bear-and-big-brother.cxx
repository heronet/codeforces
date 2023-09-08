#include <iostream>

int main() {
	int limak, bob;
	std::cin >> limak >> bob;
	int years = 0;
	while(limak <= bob) {
		limak = limak * 3;
		bob = bob * 2;
		++years;
	}
	std::cout << years << std::endl;
}
