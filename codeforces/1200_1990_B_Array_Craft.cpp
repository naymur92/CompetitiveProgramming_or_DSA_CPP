/*
https://codeforces.com/problemset/problem/1990/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--)
	{
		int n, x, y;
		cin >> n >> x >> y;

		x--, y--;

		vector<int> a(n, 1);

		for (int i = y - 1; i >= 0; i -= 2)
		{
			a[i] = -1;
		}
		for (int i = x + 1; i < n; i += 2)
		{
			a[i] = -1;
		}

		for (int i = 0; i < n; ++i)
		{
			cout << a[i] << " ";
		}
		cout << "\n";
	}
}


/*
3
2 2 1
4 4 3
6 5 1

*/

/*
1 1
1 -1 1 1
1 1 -1 1 1 -1
*/