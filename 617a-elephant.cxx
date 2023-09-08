#include <iostream>

int main() {
	int x;
	std::cin >> x;
	int steps = 0;
	while(x) {
		if(x >= 5) {
			x -= 5;
			++steps;
		}
		else if(x >= 4) {
			x -= 4;
			++steps;
		}
		else if(x >= 3) {
			x -= 3;
			++steps;
		}
		else if(x >= 2) {
			x -= 2;
			++steps;
		}
		else if(x >= 1) {
			x -= 1;
			++steps;
		}
	}
	std::cout << steps << std::endl;
}
