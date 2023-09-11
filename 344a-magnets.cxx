#include <iostream>

int main() {
	int curr = 0;
	int count = 1;

	int n;
	std::cin >> n;
	while(n--) {
		int x;
		std::cin >> x;

		if(curr == 0)
			curr = x;
	
		if(curr != x) {
			curr = x;
			++count;
		}
	}
	std::cout << count << std::endl;
}
