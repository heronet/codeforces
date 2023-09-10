#include <iostream>

int main () {
	int n;
	std::cin >> n;
	int max = 0;
	int curr = 0;
	bool minus = true;

	for (int i = 0; i != n * 2; ++i) {
		int x;
		std::cin >> x;
		if(minus) {
			curr -= x;
		} else {
			curr += x;
		}
		minus = !minus;
		if (curr > max) max = curr;
	}
	std::cout << max << std::endl;
}
