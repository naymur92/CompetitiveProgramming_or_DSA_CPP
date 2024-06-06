/*
https://codeforces.com/problemset/problem/1359/B
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--)
	{
		int n, m, x, y;
		cin >> n >> m >> x >> y;

		bool use_small_tiles_only = (2 * x <= y);
		int total_small_tiles = 0;
		int total_large_tiles = 0;

		for (int i = 0; i < n; ++i)
		{
			string row;
			cin >> row;

			if (row[0] == '.') total_small_tiles++;

			for (int j = 1; j < m; ++j)
			{
				if (use_small_tiles_only)
				{
					if (row[j] == '.') total_small_tiles++;
				}
				else
				{
					if (row[j] == '.')
					{
						if (row[j - 1] == '.')
						{
							total_large_tiles++;
							total_small_tiles--;
							row[j] = '*';
						}
						else
						{
							total_small_tiles++;
						}
					}
				}
			}
		}
		int total_cost = total_small_tiles * x + total_large_tiles * y;
		cout << total_cost << endl;
	}
}


/*
4
1 1 10 1
.
1 2 10 1
..
2 1 10 1
.
.
3 3 3 7
..*
*..
.*.

*/

/*
10
1
20
18

*/