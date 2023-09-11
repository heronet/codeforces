#include <iostream>

int main() {
	int n, t;
	std::cin >> n >> t;
	std::string queue;
	std::cin >> queue;

	for(int i = 0; i != t; ++i) {
		for(std::string::iterator it = queue.begin(); it != queue.end(); ++it) {
			if((it + 1) != queue.end() && *it == 'B' && *(it + 1) == 'G') {
				std::swap(*it, *(it + 1));
				it = it + 1;
			}
		}
	}
	std::cout << queue << std::endl;
}
