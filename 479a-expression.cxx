#include <iostream>

int main() {
	int a, b, c;
	std::cin >> a >> b >> c;
	int sum = 0;

	if (a + b + c > sum)
		sum = a + b + c;
	if (a + b * c > sum)
		sum = a + b * c;
	if (a * b * c > sum)
		sum = a * b * c;
	if (a * (b + c) > sum)
		sum = a * (b + c);
	if ((a + b) * c > sum)
		sum = (a + b) * c;
	std::cout << sum << std::endl;
}
