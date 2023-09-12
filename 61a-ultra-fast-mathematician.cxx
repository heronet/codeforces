#include <iostream>

int main() {
	std::string s1, s2;
	std::cin >> s1 >> s2;

	std::string ans;

	for(int i = 0; i != s1.size(); ++i) {
		if(s1[i] == s2[i])
			ans.push_back('0');
		else
			ans.push_back('1');
	}
	std::cout << ans << std::endl;
}
