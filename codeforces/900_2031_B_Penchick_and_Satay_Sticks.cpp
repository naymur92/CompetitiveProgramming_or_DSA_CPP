/*
https://codeforces.com/problemset/problem/2031/B
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

		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
		}

		bool is_possible = true;
		for (int i = 0; i < n - 1; ++i)
		{
			if (a[i] == i + 1) continue;

			if (a[i + 1] != i + 1 || a[i] != i + 2) {
				is_possible = false;
				break;
			}
			swap(a[i], a[i + 1]);
		}

		cout << (is_possible ? "YES\n" : "NO\n");
	}
}


/*
2
4
2 1 3 4
4
4 2 3 1

*/

/*
YES
NO

*/