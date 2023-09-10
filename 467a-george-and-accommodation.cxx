#include <iostream>

int main() {
	int n;
	std::cin >> n;
	int count = 0;
	while(n--) {
		int x, y;
		std::cin >> x >> y;
		if(y - x >= 2)
			++count;
	}
	std::cout << count << std::endl;
}
