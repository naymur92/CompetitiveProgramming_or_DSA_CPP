/*
https://codeforces.com/problemset/problem/1951/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		int n, k;
		cin >> n >> k;

		k--;

		vector<int> a(n);
		vector<int> b(n);
		for (int i = 0; i < n; ++i) {
			cin >> a[i];
			b[i] = a[i];
		}

		swap(b[0], b[k]);

		int pos = -1;
		for (int i = 0; i < k; ++i) {
			if (a[i] > a[k]) {
				pos = i;
				break;
			}
		}

		if (pos != -1) {
			swap(a[k], a[pos]);
			k = pos;
		}

		int leftBit = k - 1 >= 0 ? 1 : 0;
		int rightBit = 0;
		for (int i = k + 1; i < n; ++i) {
			if (a[i] < a[k]) {
				rightBit++;
			} else {
				break;
			}
		}

		int defeat = leftBit + rightBit;

		int defeat_ = 0;
		for (int i = 1; i < n; ++i) {
			if (b[0] > b[i]) {
				defeat_++;
			} else {
				break;
			}
		}

		cout << max(defeat_, defeat) << "\n";
	}
}


/*
3
6 1
12 10 14 11 8 3
6 5
7 2 727 10 12 13
2 2
1000000000 1

*/

/*
1
2
0

*/