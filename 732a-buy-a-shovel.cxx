#include <iostream>

int main() {
	int k, r;
	std::cin >> k >> r;

	int count = 1;
	while (true) {
			int calc = count * k % 10; 
			if (calc == 0)
				break;
			else if (calc - r == 0)
				break;
			++count;
	}

	std::cout << count << std::endl;
}
