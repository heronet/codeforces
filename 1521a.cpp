#include <iostream>

void solve()
{
	using namespace std;

	long long a, b;
	cin >> a >> b;

	if (b == 1)
	{
		printf("NO\n");
		return;
	}

	cout << "YES\n";
	cout << (a * b) << " " << a << " " << ((b + 1) * a) << "\n";
}

int main()
{
	int tc;
	std::cin >> tc;

	while (tc--)
	{
		solve();
	}
	return 0;
}
