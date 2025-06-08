#include <iostream>

int main() {
	using namespace std;

	int tc;
	cin >> tc;

	while(tc--) {
		long long n, k;
		cin >> n >> k;

		string s;
		cin >> s;

		if(s.length() == 2) {
			if(s[0] == s[1] && k == 1) {
				printf("YES\n");
				continue;
			} else {
				printf("NO\n");
				continue;
			}
		}

		for(long long i = 0; i != n / 2; ++i) {
			if(s[i] == s[n - 1 - i]) {
				--k;
				continue;
			}

			if((i != n - i - 2) && s[i] == s[n - 1 - i - 1]) {
				swap(s[n - 1 - i], s[n - 1 - i - 1]);
				--k;
			}
		}

		k == 0 ? printf("YES\n") : printf("NO\n");

	}
}
