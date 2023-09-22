#include <iostream>

int main() {
	int arr[5];
	std::cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
	int count = 0;

	for(int i = 1; i <= arr[4]; ++i) {
		if(i % arr[0] == 0 || i % arr[1] == 0 || i % arr[2] == 0 || i % arr[3] == 0) {
			++count;
		}
	}
	std::cout << count << std::endl;
}
