#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n = 4;
	bool is_prime = true;

	if (n == 1) {
		cout << "NO\n";
		return 0;
	}

	// brute force method
	/*for (int i = 2; i < n; ++i)
	{
		if (n % i == 0) {
			is_prime = false;
			break;
		}
	}*/


	// O(sqrt(N)) method
	for (int i = 2; i * i <= n; ++i)
	{
		if (n % i == 0) {
			is_prime = false;
		}
	}

	cout << (is_prime ? "YES\n" : "NO\n");

}

/*

*/

/*

*/