#include <iostream>

int main() {
	int n;
	std::cin >> n;
	double total = 0;
	for(int i = 0; i != n; ++i) {
		int x;
		std::cin >> x;
		total += x;
	}
	double res = total / n;
	printf("%.9lf\n", res);
}
