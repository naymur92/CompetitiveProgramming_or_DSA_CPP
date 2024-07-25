/*
https://codeforces.com/problemset/problem/1676/D
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--)
	{
		int n, m;
		cin >> n >> m;
		vector<vector<int>> board(n, vector<int>(m));

		// define 2 diagonal set
		vector<int> D1(n + m - 1); // top-left to right-bottom
		vector<int> D2(n + m - 1); // left-bottom to top-right

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				// read number and assign to board (metrix)
				int num;
				cin >> num;
				board[i][j] = num;

				// add values to diagonal set
				D1[i + j] += num;
				D2[n - 1 - i + j] += num;
			}
		}

		/*print board*/
		// for (int i = 0; i < n; ++i)
		// {
		// 	for (int j = 0; j < m; ++j)
		// 	{
		// 		cout << board[i][j] << " ";
		// 	}
		// 	cout << "\n";
		// }
		// cout << "\n";

		// find maximul through diagonal sets
		int maximul = 0;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				maximul = max(maximul, (D1[i + j] + D2[n - 1 - i + j] - board[i][j]));
			}
		}
		cout << maximul << "\n";
	}

}


/*
4
4 4
1 2 2 1
2 4 2 4
2 2 3 1
2 4 2 4
2 1
1
0
3 3
1 1 1
1 1 1
1 1 1
3 3
0 1 1
1 0 1
1 1 0

*/

/*
20
1
5
3

*/