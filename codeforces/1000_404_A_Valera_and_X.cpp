/*
https://codeforces.com/problemset/problem/404/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int n;
	cin >> n;
	string m[n];

	for (int i = 0; i < n; ++i) cin >> m[i];

	bool diagonal_match = true;
	bool others_match = true;

	char d_char = m[0][0];
	char o_char = m[0][1];

	if (d_char == o_char) {
		diagonal_match = false;
		others_match = false;
	} else {
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				if (j == i || j == n - 1 - i) {
					// diagonal
					if (m[i][j] != d_char) {
						diagonal_match = false;
						break;
					}
				} else {
					// others
					if (m[i][j] != o_char) {
						others_match = false;
						break;
					}
				}
			}
		}	
	}
	

	if (diagonal_match && others_match) cout << "YES\n";
	else cout << "NO\n";
}


/*
5
xooox
oxoxo
soxoo
oxoxo
xooox


3
wsw
sws
wsw


3
xpx
pxp
xpe


*/

/*
NO


YES


NO

*/