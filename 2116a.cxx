#include <cstdio>
#include <iostream>

int main() {
	size_t tc;
	std::cin >> tc;

	while(tc--) {
		int g, f, gk, fk;
		std::cin >> g >> f >> gk >> fk;

		int smallest = std::min(g, std::min(f, std::min(gk, fk)));

		if(smallest == f || smallest == fk) {
			printf("Gellyfish\n");
		} else {
			printf("Flower\n");
		}

	}
}
