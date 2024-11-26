/*
https://codeforces.com/problemset/problem/1994/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int n, m;
		cin >> n >> m;

		int A[n][m];

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cin >> A[i][j];
			}
		}

		if (n == 1 && m == 1) {
			cout << -1 << "\n";
			continue;
		}

		/*for (int i = 1; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cout << A[i][j] << " ";
			}
			cout << "\n";
		}
		for (int j = 1; j < m; ++j)
		{
			cout << A[0][j] << " ";
		}
		cout << A[0][0] << " ";
		cout << "\n";*/

		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < m; ++j)
			{
				cout << A[(i + 1) % n][(j + 1) % m] << " ";
			}
			cout << "\n";
		}
	}
}


/*
5
1 1
1
2 1
2
1
1 5
2 4 5 3 1
2 4
1 2 3 4
5 6 7 8
3 3
4 2 1
9 8 3
6 7 5

*/

/*
-1
1 
2 
4 5 3 1 2 
6 7 8 5 
2 3 4 1 
8 3 9 
7 5 6 
2 1 4 

*/