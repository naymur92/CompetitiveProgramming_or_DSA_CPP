/*
https://codeforces.com/problemset/problem/2002/C
*/

#include <bits/stdc++.h>

using namespace std;

long long calcDist(pair<int, int> p, pair<int, int> q) {
	return ((p.first - q.first) * 1LL * (p.first - q.first) + (p.second - q.second) * 1LL * (p.second - q.second));
}

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		vector<pair<int, int>> points(n);

		for (int i = 0; i < n; ++i) {
			int x, y;
			cin >> x >> y;
			points[i] = {x, y};
		}

		int xs, ys, xt, yt;
		cin >> xs >> ys >> xt >> yt;

		long long D = calcDist({xs, ys}, {xt, yt});

		bool isReach = true;
		for (int i = 0; i < n; ++i) {
			long long d = calcDist(points[i], {xt, yt});

			if (d <= D) {
				isReach = false;
				break;
			}
		}

		cout << (isReach ? "YES\n" : "NO\n");
	}
}


/*
7
3
2 5
2 14
10 13
4 9 9 7
3
10 11
6 9
12 12
14 13 4 8
1
5 7
12 6 11 13
2
1000000000 2
2 1000000000
1 1 2 2
1
999999998 1000000000
999999999 999999999 1 1
1
1000000000 1
1 1000000000 1 1
10
989237121 2397081
206669655 527238537
522705783 380636165
532545346 320061691
207818728 199485303
884520552 315781807
992311437 802563521
205138355 324818663
223575704 395073023
281560523 236279118
216941610 572010615 323956540 794523071

*/

/*
YES
NO
YES
YES
YES
NO
YES

*/