/*
https://codeforces.com/problemset/problem/165/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int n;
	cin >> n;

	vector<pair<int, int>> coords;

	for (int i = 0; i < n; ++i) {
		int x, y;
		cin >> x >> y;

		coords.push_back({x, y});
	}

	int sp = 0;

	for (int i = 0; i < n; ++i) {
		int x = coords[i].first;
		int y = coords[i].second;

		int c_upper = 0, c_lower = 0, c_left = 0, c_right = 0;
		for (int j = 0; j < n; ++j) {
			if (i == j)
				continue;

			int x1 = coords[j].first;
			int y1 = coords[j].second;

			if (x == x1) {
				if (y > y1)
					c_lower++;
				else if (y < y1)
					c_upper++;
			}
			if (y == y1) {
				if (x > x1)
					c_left++;
				else if (x < x1)
					c_right++;
			}
		}

		if (c_upper > 0 && c_lower > 0 && c_left > 0 && c_right > 0)
			sp++;
	}

	cout << sp << "\n";
}


/*
8
1 1
4 2
3 1
1 2
0 2
0 1
1 0
1 3


5
0 0
0 1
1 0
0 -1
-1 0

*/

/*
2



1
*/