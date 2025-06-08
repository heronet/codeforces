#include <iostream>
#include <vector>

void solve() {
	using namespace std;

		int n;
		cin >> n;

		vector<int> nums;

		for(int i = 0; i != n; ++i) {
			int temp;
			cin >> temp;
			nums.emplace_back(temp);
		}

		int zeros = 0;
		int cons_zeros = 0;

		for(int i = 0; i != n; ++i) {
			if(nums[i] == 0) {
				++zeros;
				++cons_zeros;
			} else {
				cons_zeros = 0;
			}

			if(cons_zeros > 1) {
				printf("YES\n");
				return;
			} 
		}

		if(zeros == 0) {
			printf("YES\n");
		} else {
			printf("NO\n");
		}
}

int main() {

	int tc;
	std::cin >> tc;

	while(tc--) {
		solve();
	}
}
