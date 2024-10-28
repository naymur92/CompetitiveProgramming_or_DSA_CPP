/*
https://codeforces.com/problemset/problem/2023/A
*/

#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, int> &a, pair<int, int> &b) {
    return a.first + a.second < b.first + b.second;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;

		vector<pair<int, int>> a(n);

		for (int i = 0; i < n; ++i) {
			int a_i, a_j;
			cin >> a_i >> a_j;

			a[i] = make_pair(a_i, a_j);
		}

		sort(a.begin(), a.end(), cmp);

		for (int i = 0; i < n; ++i) {
			cout << a[i].first << " " << a[i].second << " ";
		}
		cout << "\n";
	}
}


/*
4
2
1 4
2 3
3
3 2
4 3
2 1
5
5 10
2 3
9 6
4 1
8 7
1
10 20

*/

/*
2 3 1 4
2 1 3 2 4 3
4 1 2 3 5 10 8 7 9 6
10 20

*/