#include <bits/stdc++.h>
using namespace std;

const long long M = 1e18 + 7;
// M <= 10^18


long long binaryMultiply(long long a, long long b) {
	long long ans = 0;
	while (b) {
		if (b&1) {
			ans = (ans + a) % M;
		}
		a = (a + a) % M;
		b >>= 1;
	}

	return ans;
}

// a <= 10^18 or 2^1024
long long binExp(long long a, long long b)
{
	long long ans = 1;

	while (b) {
		if (b&1) {
			ans = binaryMultiply(ans, a);
		}
		a = binaryMultiply(a, a);
		b >>= 1;
	}

	return ans;
}

int main()
{
	cout << binExp(2, 5) << "\n";
	cout << binExp(6, 4) << "\n";

	cout << binExp(124444, 124414) << "\n";

	cout << binExp(3345534534423, 2313453452) << "\n";
}

/*

*/

/*

*/