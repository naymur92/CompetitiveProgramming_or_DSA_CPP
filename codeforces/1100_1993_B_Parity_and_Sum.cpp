/*
https://codeforces.com/problemset/problem/1993/B
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

		vector<int> even_nums;
		long long max_odd = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> a[i];

			if (a[i]&1) {
				max_odd = max(max_odd, 1LL * a[i]);
			} else {
				even_nums.push_back(a[i]);
			}
		}

		if (even_nums.size() == 0 || even_nums.size() == n) {
			cout << 0 << "\n";
		} else {
			sort(even_nums.begin(), even_nums.end());

			int ans = 0;
			for (int i = 0; i < even_nums.size(); ++i)
			{
				if (even_nums[i] < max_odd) {
					max_odd += even_nums[i];
					ans++;
				} else {
					max_odd += 2 * even_nums[even_nums.size() - 1];
					ans += 2;
				}		
			}

			cout << ans << "\n";
		}
	}
}


/*
7
5
1 3 5 7 9
4
4 4 4 4
3
2 3 4
4
3 2 2 8
6
4 3 6 1 2 1
6
3 6 1 2 1 2
5
999999996 999999997 999999998 999999999 1000000000

*/

/*
0
0
2
4
3
3
3

*/