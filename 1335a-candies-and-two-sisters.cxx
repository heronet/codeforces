#include <iostream>

int main() {
	int tc;
	std::cin >> tc;
	while (tc--) {
		long x;
		std::cin >> x;
		long ans = (x - 1) / 2;
		std::cout << ans << std::endl;
	}
}
