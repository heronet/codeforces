#include <iostream>

int main() {
	int tc;
	std::cin >> tc;

	while(tc--) {
		int x, y;
		int count = 0;
		std::cin >> x >> y;
		int rem = x % y;
		if(rem)
			std::cout << y - rem << std::endl;
		else
			std::cout << 0 << std::endl;
	}
}
