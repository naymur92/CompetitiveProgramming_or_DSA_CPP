/*
https://codeforces.com/problemset/problem/2002/A
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, m, k;
		cin >> n >> m >> k;

		int ans = min(n, k) * min(m, k);
		cout << ans << "\n";
	}
}


/*
6
3 3 2
5 1 10000
7 3 4
3 2 7
8 9 6
2 5 4

*/

/*
4
5
12
6
36
8

*/