#include <iostream>

int main() {
	int n;
	std::cin >> n;

	int first;
	std::cin >> first;

	--n;
	int max = first;
	int min = first;
	int count = 0;
	while (n--) {
		int x;
		std::cin >> x;

		if (x < min) {
			++count;
			min = x;
		} else if (x > max) {
			++count;
			max = x;
		}
	}
	std::cout << count << std::endl;
}
