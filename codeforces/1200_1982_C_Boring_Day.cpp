/*
https://codeforces.com/problemset/problem/1982/C
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		int n, l, r;
		cin >> n >> l >> r;

		vector<int> nums(n);

		for (auto &num: nums) cin >> num;

		int wins = 0, i = 0, j = 0, sum = 0;

		while (i < n) {
			sum += nums[i++];

			while (j <= i and sum > r) {
				sum -= nums[j++];
			}

			if (sum >= l and sum <= r) {
				wins++;
				j = i;
				sum = 0;
			}

			// cout << i << " ";
		}
		// cout << "\n";

		cout << wins << "\n";
	}
}


/*
8
5 3 10
2 1 11 3 7
10 1 5
17 8 12 11 7 11 21 13 10 8
3 4 5
3 4 2
8 12 25
10 7 5 13 8 9 12 7
2 3 3
5 2
9 7 9
2 10 5 1 3 7 6 2 3
1 8 10
9
5 5 6
1 4 2 6 4

*/

/*
3
0
1
4
0
3
1
2

*/