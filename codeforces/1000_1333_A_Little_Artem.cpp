/*
https://codeforces.com/problemset/problem/1333/A
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
		vector<vector<char>> board(n, vector<char>(m, 'B'));

		board[0][0] = 'W';
		
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j) {
				cout << board[i][j];
			}
			cout << "\n";
		}
	}
}


/*
2
3 2
3 3

*/

/*
BW
WB
BB
BWB
BWW
BWB
*/