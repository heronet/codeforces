#include <iostream>

int main() {
	int n, m;
	std::cin >> n >> m;

	bool right = true;

	for (int i = 1; i <= n; ++i) {
		if (i % 2) {
			for (int j = 0; j != m; ++j)
				std::cout << '#';
		} else {
			if (right) {
				for (int j = 1; j != m; ++j)
					std::cout << '.';
				std::cout << '#';	
			} else {
				std::cout << '#';	
				for (int j = 1; j != m; ++j)
					std::cout << '.';
			}
			right = !right;
		}
		std::cout << std::endl;
	}
}
