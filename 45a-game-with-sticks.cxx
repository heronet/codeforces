#include <iostream>

int main() {
	size_t n, m;
	std::cin >> n >> m;
	
	std::string p_curr = "Malvika";

	while(n * m) {
		n = n - 1;
		m = m - 1;
		if(p_curr == "Malvika")
			p_curr = "Akshat";
		else
			p_curr = "Malvika";
	}
	std::cout << p_curr << std::endl;
}
