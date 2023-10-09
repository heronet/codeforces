#include <algorithm>
#include <cstdio>
#include <vector>
#include <string>
#include <iostream>

int main() {
	int n;
	std::cin >> n;

	std::vector<std::vector<int>> svec;

	while (n--) {
		std::string num;
		std::cin >> num;

		std::vector<int> ivec;


		while (num.size() > 1) {

			int last_non_zero = 0;		

			for (int i = num.size() - 1; i != 0; --i)
			{
				if (num[i] - '0' > 0)
					last_non_zero = i;
			}

			std::string new_num = num.substr(last_non_zero, num.size() - last_non_zero);
			if (num != new_num)
				ivec.push_back(atoi(num.c_str()) - atoi(new_num.c_str()));

			num = new_num;

			int zeros = std::count(num.begin(), num.end(), '0');
			if (zeros == num.size() - 1 && zeros != 0) {
				ivec.push_back(atoi(num.c_str()));
				break;
			}

		}

		if (num.size() == 1)
			ivec.push_back(atoi(num.c_str()));

		svec.push_back(ivec);
	}

	for (auto x: svec) {
		std::cout << x.size() << std::endl;
		for (int y: x) {
			std::cout << y << " ";
		}
		std::cout << std::endl;
	}
}
