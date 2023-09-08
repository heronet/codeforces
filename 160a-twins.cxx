#include <algorithm>
#include <iostream>
#include <vector>

int main() {
	int iter;
	std::cin >> iter;
	std::vector<int> coins;
	int total = 0;
	while(iter--) {
		int x;
		std::cin >> x;
		coins.push_back(x);
		total += x;
	}
	int count = 0;
	int my_money = 0;
	std::sort(coins.rbegin(), coins.rend());
	for(const int x: coins) {
		if(my_money > total / 2)
			break;
		my_money += x;
		++count;
	}
	std::cout << count << std::endl;
}
