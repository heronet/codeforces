#include <cctype>
#include <iostream>

int main() {
	std::string input;
	std::cin >> input;
	for(char ch: input) {
		ch = tolower(ch);
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'y')
			continue;
		std::cout << '.' << ch;
	}
	std::cout << std::endl;
}
