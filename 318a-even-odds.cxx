#include <iostream>

int main() {
	long long n, k;
	std::cin >> n >> k;
	long long half = n % 2 ? n / 2 + 1: n / 2;
	long long ans = 0;
	if (half >= k)
		ans = k * 2 - 1;
	else
		ans = (k - half) * 2;
	std::cout << ans << std::endl;
}
