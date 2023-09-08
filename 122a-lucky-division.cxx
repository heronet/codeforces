#include <cstdio>
#include <cstdlib>
#include <iostream>

int main() {
	std::string num;
	std::cin >> num;
	bool is_lucky = true;
	for(char ch: num) {
		if(ch != '4' && ch != '7') {
			is_lucky = false;
			break;
		}
	}
	int n_num = atoi(num.c_str());
	if(is_lucky || n_num % 4 == 0 || n_num % 7 == 0 || n_num % 47 == 0 || n_num % 744 == 0)
		std::cout << "YES" << std::endl;
	else
		std::cout << "NO" << std::endl;
 }
