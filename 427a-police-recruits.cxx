#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int balance = 0;
	int count = 0;

	while (n--) {
		int x;
		std::cin >> x;

		if (x > 0)
			balance += x;

		if (x < 0) {
			if (balance > 0) {
				--balance;
			} else {
				++count;
			}
		}
	}
	std::cout << count << std::endl;
}
