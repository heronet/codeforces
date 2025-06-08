#include <iostream>
#include <vector>
#include <algorithm>

int main() {
	using namespace std;

	int tc;
	cin >> tc;

	while(tc--) {
		int n;
		cin >> n;

		vector<int> arr;

		for(int i = 0; i != n; ++i) {
			int temp;
			cin >> temp;
			arr.push_back(temp);
		}

		sort(arr.begin(), arr.end());

		if(arr[0] % 2 == arr[n - 1] % 2) {
			printf("%d\n", 0);
			continue;
		}

		int minf = n;

		for(int i = 0; i != n; ++i) {
			if(arr[i] % 2 != arr[0] % 2) {
				minf = i;
				break;
			}
		}

		int minb = n;

		for(int i = n - 1; i >= 0; --i) {
			if(arr[i] % 2 != arr[n - 1] % 2) {
				minb = n - 1 - i;
				break;
			}
		}

		int minv = min(minf, minb);

		printf("%d\n", minv);

	}
}
