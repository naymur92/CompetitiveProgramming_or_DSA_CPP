/*
https://codeforces.com/problemset/problem/1520/C
*/

#include <bits/stdc++.h>

using namespace std;


int main(){
	int t;
	cin >> t;

	while(t--)
	{
		int n;
		cin >> n;

		if(n == 1) {
			cout << 1 << endl;
		} else if(n == 2) {
			cout << -1 << endl;
		} else {
			vector<vector<int>> a(n, vector<int> (n));

			// initialize two corner data (min and max)
			a[0][0] = 1;
			a[n - 1][n - 1] = n * n;

			// cover max data less than n^2 in decreasing order from first corner
			int x = n * n - 1;
			for (int i = 0; i < n; ++i)
			{
				/* code */
			}

			// print data
			for (int i = 0; i < n; ++i)
			{
				for (int j = 0; j < n; ++j)
				{
					cout << a[i][j] << " ";
				}
				cout << endl;
			}
		}
	}
}


/*
3
1
2
3

*/

/*
1
-1
2 9 7
4 6 3
1 8 5

*/