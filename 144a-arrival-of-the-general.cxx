#include <algorithm>
#include <iostream>

int main() {
	int n;
	std::cin >> n;
	int ivec[n];
	for(int i = 0; i != n; ++i) {
		std::cin >> ivec[i];
	}

	int big_i = 0, big_n = 0, sm_i = 0, sm_n = ivec[0];
	for (int i = 0; i != n; ++i) {
		if(ivec[i] > big_n) {
			big_i = i;
			big_n = ivec[i];
		} else if (ivec[i] <= sm_n) {
			sm_i = i;
			sm_n = ivec[i];
		}
	}
	int secs = big_i + n - 1 - sm_i;
	if (big_i > sm_i)
		--secs;
	std::cout << secs << std::endl;

}
