#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	int s, n;
	std::cin >> s >> n;

	std::vector<std::pair<int, int>> nums;

	while(n--) {
		int x, y;
		std::cin >> x >> y;
		nums.push_back(std::make_pair(x, y));
	}

	std::sort(nums.begin(), nums.end(), [](std::pair<int, int>& p1, std::pair<int, int>& p2) {
			return p1.first < p2.first;
	});

	for(const auto& pair: nums) {
		if(s <= pair.first) {
			printf("NO\n");
			return 0;
		} 

		s += pair.second;
	}

	printf("YES\n");
}
