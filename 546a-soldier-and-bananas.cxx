#include <iostream>

int main() {
	int k, n, w;
	std::cin >> k >> n >> w;
	int money_needed = 0;
	for(int i = 1; i <= w; ++i) {
		money_needed += i * k;
	}
	int borrow = money_needed > n ? money_needed - n : 0;
	std::cout << borrow << std::endl;
}
