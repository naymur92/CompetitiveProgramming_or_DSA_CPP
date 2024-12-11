#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n = 36;
	int cnt = 0, sum = 0;

	// brute force method
	/*for (int i = 1; i <= n; ++i)
	{
		if (n % i == 0) {
			cout << i << "\n";
			cnt++;
			sum += i;
		}
	}*/


	// O(sqrt(N)) method
	for (int i = 1; i * i <= n; ++i)
	{
		if (n % i == 0) {
			cout << i << " " << n / i << "\n";
			cnt ++;
			sum += i;

			if (i != n / i) {
				cnt++;
				sum += n / i;
			}
		}
	}


	cout << "Count: " << cnt << ", Sum: " << sum << "\n";
}

/*

*/

/*

*/