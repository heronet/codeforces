#include <iostream>
#include <set>
#include <string>

int main() {
	std::string inp;
	std::getline(std::cin, inp);
	std::set<char> set;

	for(const char ch: inp) {
		if(ch >= 'a' && ch <= 'z') {
			set.emplace(ch);
		}
	}
	std::cout << set.size() << std::endl;
}
