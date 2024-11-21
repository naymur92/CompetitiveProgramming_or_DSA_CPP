/*
https://codeforces.com/problemset/problem/2000/D
*/

#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n;
		cin >> n;

		int a[n];
		long long A[n + 1];
		A[0] = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];
			A[i + 1] = A[i] + 1LL * a[i];
		}

		string s;
		cin >> s;

		long long ans = 0;
		int l = 0, r = n - 1;

		while (l < r)
		{
			while (s[l] == 'R')
				l++;
			while (s[r] == 'L')
				r--;

			if (l >= r)
				break;

			ans += (A[r + 1] - A[l]);
			l++;
			r--;
		}

		cout << ans << "\n";
	}
}


/*
4
6
3 5 1 4 3 2
LRLLLR
2
2 8
LR
2
3 9
RL
5
1 2 3 4 5
LRLRR

*/

/*
18
10
0
22

*/