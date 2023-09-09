#include <iostream>

int main() {
	int n;
	std::cin >> n;
	int arr[n][2];

	for (int i = 0; i != n; ++i) {
		std::cin >> arr[i][0] >> arr[i][1];
	}
	int count = 0;
	for(int i = 0; i != n; ++i) {
		for(int j = i + 1; j != n; ++j) {
			if (arr[i][0] == arr[j][1])
				++count;
			if (arr[i][1] == arr[j][0])
				++count;
		}
	}
	std::cout << count << std::endl;
}
