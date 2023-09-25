#include <algorithm>
#include <iostream>

int main() {
	std::string s1, s2, s3;
	std::cin >> s1 >> s2 >> s3;

	std::string s4 = s1 + s2;
	std::sort(s3.begin(), s3.end());
	std::sort(s4.begin(), s4.end());

	if (s3 == s4)
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
}
