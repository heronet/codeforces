#include <cstdio>
#include <iostream>

int main() {
	std::string inp;
	std::cin >> inp;

	uint32_t streak = 1;
	
	char curr = inp[0];

	if(inp.size() < 7) {
		printf("NO\n");
		return 0;
	}

	for(int i = 1; i != inp.size(); ++i) {
		if(inp[i] == curr) {
			++streak;
		}	else {
			curr = inp[i];
			streak = 1;
		}

		if(streak >= 7) break;
	}

	if(streak >= 7) printf("YES\n");
	else printf("NO\n");
}
