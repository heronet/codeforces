#include <iostream>
#include <cmath>

int main() {
	using namespace std;
	size_t tc;
	cin >> tc;

	while(tc--) {
		int x;
		cin >> x;
		if(!x) {
			printf("0 0\n");
			continue;
		}
		
		int p_rt = ceil(sqrt(x));
		int rt = floor(sqrt(x));

		if(p_rt != rt) {
			printf("-1\n");
		} else {
			printf("%d %d\n", rt , 0);
		}
	}

}
