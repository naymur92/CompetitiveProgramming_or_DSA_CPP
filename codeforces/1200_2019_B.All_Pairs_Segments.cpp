/*
https://codeforces.com/problemset/problem/2019/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n, q;
		cin >> n >> q;

		vector<int> x(n);

		for (int i = 0; i < n; ++i) {
			cin >> x[i];
		}

		map<long long, long long> cnt;

		cnt[n - 1]++;

		for (int i = 0; i < n - 1; ++i) {
			cnt[i * 1LL * (n - i - 1) + n - 1]++;

			if (x[i + 1] - x[i] > 1) {
				cnt[(i + 1) * 1LL * (n - i - 1)] += (x[i + 1] - x[i] - 1);
			}
		}

		for (int i = 0; i < q; ++i) {
			long long k;
			cin >> k;
			cout << cnt[k] << " \n"[i == q - 1];
		}
	}
}


/*
3
2 2
101 200
2 1
6 15
1 2 3 5 6 7
1 2 3 4 5 6 7 8 9 10 11 12 13 14 15
5 8
254618033 265675151 461318786 557391198 848083778
6 9 15 10 6 9 4 4294967300

*/

/*
0 100 
0 0 0 0 2 0 0 0 3 0 2 0 0 0 0 
291716045 0 0 0 291716045 0 301749698 0 

*/