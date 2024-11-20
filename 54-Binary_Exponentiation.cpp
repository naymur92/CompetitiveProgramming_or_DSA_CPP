#include <bits/stdc++.h>
using namespace std;

const int M = 1e9 + 7;

int binExpRec(int a, int b)
{
	if (b == 0) return 1;

	int res = binExpRec(a, b/2);

	if (b&1) return (a * ((1LL * res * res) % M)) % M;
	else return (1LL * res * res) % M;
}

int binExpIter(int a, int b)
{
	int ans = 1;

	while(b) {
		if (b&1) {
			ans = (ans * 1LL * a) % M;
		}
		a = (a * 1LL * a) % M;
		b >>= 1;
	}

	return ans;
}

int main()
{
	cout << binExpRec(2, 4) << "\n";
	cout << binExpRec(6, 3) << "\n";

	cout << binExpIter(2, 5) << "\n";
	cout << binExpIter(6, 4) << "\n";

	cout << binExpRec(124444, 124414) << "\n";
	cout << binExpIter(124444, 124414) << "\n";
}

/*

*/

/*

*/