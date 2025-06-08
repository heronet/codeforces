#include <iostream>

using namespace std;

void solve()
{
	int n, a, b;
	cin >> n >> a >> b;

	string str;
	cin >> str;

	int one = 0;
	int zero = 0;
	int total = 0;

	for (int i = 0; i != n; ++i)
	{
		if (str[i] == '1')
		{
			++one;
			// Reset 0 counter when hit 1 and add to the calculation
			if (zero)
			{
				total += (zero * a + b);
				zero = 0;
			}
		}
		else
		{
			++zero;
		}
	}

	if (zero)
		total += (zero * a + b);
	if (one)
		total += (one * a + b);

	int one2 = 0;
	int zero2 = 0;
	int total2 = 0;

	for (int i = 0; i != n; ++i)
	{
		if (str[i] == '0')
		{
			++zero2;
			// Reset 1 counter when hit 0 and add to the calculation
			if (one2)
			{
				total2 += (one2 * a + b);
				one2 = 0;
			}
		}
		else
		{
			++one2;
		}
	}

	if (zero2)
		total2 += (zero2 * a + b);
	if (one2)
		total2 += (one2 * a + b);

	// Now another round for single count
	int total3 = a * n + b * n;

	// printf("t1: %d, t2: %d, t3: %d\n", total, total2, total3);

	cout << max(max(total, total2), total3) << "\n";
}

int main()
{
	size_t tc;
	cin >> tc;

	while (tc--)
	{
		solve();
	}
}
