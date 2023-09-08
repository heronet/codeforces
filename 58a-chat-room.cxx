#include <iostream>

int main() {
	std::string s;
	std::cin >> s;
	int h = 0, e = 0, l = 0, o = 0;
	int count = 0;
	for(char ch: s) {
		if(ch == 'h' && h == 0) {
			++count;
			++h;
		}
		if(ch == 'e' && h == 1 && e == 0 && l == 0 && o == 0) {
			++e;
			++count;
		}
		if(ch == 'l' && h == 1 && e == 1 && l == 0 && o == 0) {
			++l;
			++count;
		}
		else if(ch == 'l' && h == 1 && e == 1 && l == 1 && o == 0) {
			++l;
			++count;
		}
		if(ch == 'o' && h == 1 && e == 1 && l == 2 && o == 0) {
			++o;
			++count;
		}
	}
	if(h && e && o && l == 2 && count == 5)
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
}
