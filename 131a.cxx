#include <cctype>
#include <cstddef>
#include <iostream>
#include <string>

int main() {
	std::string str;
	std::cin >> str;

	size_t upper = 0;

	for(size_t i = 0; i != str.size(); ++i) {
		if(isupper(str[i])) ++upper;
	}

	if(upper == str.length() - 1 && islower(str[0])) {
		printf("%c", toupper(str[0]));
		for(size_t i = 1; i != str.length(); ++i) {
			printf("%c", tolower(str[i]));
		}
		std::cout << std::endl;
	} else if(upper == str.size()) {
		for(size_t i = 0; i != str.length(); ++i) {
			printf("%c", tolower(str[i]));
		}
		std::cout << std::endl;
	} else {
		std::cout << str << std::endl;
	}
}
