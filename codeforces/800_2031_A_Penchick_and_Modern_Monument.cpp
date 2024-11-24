/*
https://codeforces.com/problemset/problem/2029/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		int a[n + 1] = {0};

		for (int i = 0; i < n; ++i)
		{
			int ai;
			cin >> ai;

			a[ai]++;
		}

		sort(a, a + n + 1);

		cout << n - a[n] << "\n";
	}
}


/*
3
5
5 4 3 2 1
3
2 2 1
1
1

*/

/*
4
1
0

*/