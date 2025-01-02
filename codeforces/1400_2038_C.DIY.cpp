/*
https://codeforces.com/problemset/problem/2038/C
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n;
		cin >> n;
		map<int, int> mp;
		vector<int> a;

		for (int i = 0; i < n; ++i) {
			int num;
			cin >> num;

			mp[num]++;

			if (mp[num] == 2) {
				a.push_back(num);
				mp[num] = 0;
			}
		}

		sort(a.begin(), a.end());

		/*for (int num: a) {
			cout << num << " ";
		}
		cout << "\n";*/

		if (a.size() < 4) cout << "NO\n";
		else {
			int p = a[0], q = a[1], r = a[a.size() - 2], s = a.back();
			cout << "YES\n";
			cout << p << ' ' << q << ' ' << p << ' ' << s << ' ' << r << ' ' << q << ' ' << r << ' ' << s << "\n";
		}
	}
}


/*
3
16
-5 1 1 2 2 3 3 4 4 5 5 6 6 7 7 10
8
0 0 -1 2 2 1 1 3
8
0 0 0 0 0 5 0 5

*/

/*
YES
1 2 1 7 6 2 6 7
NO
YES
0 0 0 5 0 0 0 5

*/