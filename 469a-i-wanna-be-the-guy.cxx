#include <iostream>
#include <set>

int main() {
	int n;
	std::cin >> n;
	std::set<int> set;

	int one;
	std::cin >> one;
	while(one--) {
		int x;
		std::cin >> x;
		set.emplace(x);
	}

	int two;
	std::cin >> two;
	while(two--) {
		int x;
		std::cin >> x;
		set.emplace(x);
	}

	std::cout << ((set.size() == n) ? "I become the guy." : "Oh, my keyboard!") << std::endl;
}
