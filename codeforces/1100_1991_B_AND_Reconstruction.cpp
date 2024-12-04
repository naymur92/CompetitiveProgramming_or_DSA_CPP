/*
https://codeforces.com/problemset/problem/1991/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		int a[n];
		int b[n - 1];

		for (int i = 0; i < n - 1; ++i)
		{
			cin >> b[i];
		}

		a[0] = b[0];
		a[n - 1] = b[n - 2];

		for (int i = 1; i < n - 1; ++i)
		{
			a[i] = (b[i - 1] | b[i]);
		}

		bool is_possible = true;
		for (int i = 0; i < n - 1; ++i)
		{
			if (b[i] != (a[i] & a[i + 1])) {
				is_possible = false;
				break;
			}
		}

		// for (int i = 0; i < n; ++i)
		// {
		// 	cout << a[i] << " ";
		// }
		// cout << "\n";

		if (is_possible) {
			for (int i = 0; i < n; ++i)
			{
				cout << a[i] << " ";
			}
			cout << "\n";
		} else {
			cout << -1 << "\n";
		}
	}
}


/*
4
2
1
3
2 0
4
1 2 3
5
3 5 4 2

*/

/*
5 3
3 2 1
-1
3 7 5 6 3

*/