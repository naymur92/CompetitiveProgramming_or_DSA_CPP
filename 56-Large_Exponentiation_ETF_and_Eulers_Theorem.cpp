#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;

// (a^b)^c

// a <= 10^18 or 2^1024
int binExp(int a, long long b, int m)
{
	int ans = 1;

	while(b) {
		if (b&1) {
			ans = (ans * 1LL * a) % m;
		}
		a = (a * 1LL * a) % m;
		b >>= 1;
	}

	return ans;
}

int main()
{
	cout << binExp(50, binExp(64, 32, M - 1), M) << "\n";
}

/*

*/

/*

*/