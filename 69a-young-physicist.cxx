#include <iostream>

int main() {
	int n;
	std::cin >> n;
	int coord[3] = { 0, 0, 0 };
	for(int i = 0; i != n; ++i) {
		int x, y, z;
		std::cin >> x >> y >> z;
		coord[0] += x;
		coord[1] += y;
		coord[2] += z;
	}
	if(!coord[0] && !coord[1] && !coord[2]) {
		std::cout << "YES" << std::endl;
	} else {
		std::cout << "NO" << std::endl;
	}
}
