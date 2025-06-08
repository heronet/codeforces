#include <iostream>

int main() {
	using namespace std;
	size_t tc;
	cin >> tc;

	while(tc--) {
		int x;
		cin >> x;

		int arr[3] = {0, 0, 0};

		int count = 0;

		while((arr[0] + arr[1] + arr[2]) != (3 * x)) {
			int _min = min(arr[0], min(arr[1], arr[2]));

			for(int i = x; i >= 0; --i) {
				if(_min == arr[0]) {
					if((i >= arr[1] / 2) && (arr[1] >= i / 2) && (i >= arr[2] / 2) && (arr[2] >= i / 2)) {
						arr[0] = i;
						break;
					}
				} 
				else if(_min == arr[1]) {
					if((i >= arr[0] / 2) && (arr[0] >= i / 2) && (i >= arr[2] / 2) && (arr[2] >= i / 2)) {
						arr[1] = i;
						break;
					}
				}
				else if(_min == arr[2]) {
					if((i >= arr[1] / 2) && (arr[1] >= i / 2) && (i >= arr[0] / 2) && (arr[0] >= i / 2)) {
						arr[2] = i;
						break;
					}
				}

			}

			++count;
		}

		printf("%d: %d\n", x, count);
	}
}
