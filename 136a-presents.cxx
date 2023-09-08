#include <algorithm>
#include <iostream>
#include <unordered_map>
#include <vector>

int main() {
	int n;
	std::cin >> n;
	std::vector<int> ivec;
	std::unordered_map<int, int> map;
	for(int i = 0; i != n; ++i) {
		int x;
		std::cin >> x;
		ivec.push_back(x);	
		map[x] = i + 1;
	}
	std::sort(ivec.begin(), ivec.end());
	for(int x: ivec) {
		std::cout << map[x] << " ";
	}
	std::cout << std::endl;
}
