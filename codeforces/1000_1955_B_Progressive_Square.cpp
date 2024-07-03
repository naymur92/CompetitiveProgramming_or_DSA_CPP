/*
https://codeforces.com/problemset/problem/1955/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, c, d;
		cin >> n >> c >> d;
		vector<unsigned long> nums(n*n);
		for (int i = 0; i < n*n; ++i) cin >> nums[i];

		sort(nums.begin(), nums.end());

		unsigned long prevNumber = nums[0];
		vector<unsigned long> newProgSquare;

		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < n; ++j) {
				newProgSquare.push_back(prevNumber + j * c);
			}
			prevNumber += d;
		}

		sort(newProgSquare.begin(), newProgSquare.end());

		bool notMatched = false;

		for (int i = 0; i < n * n; ++i) {
			if (nums[i] != newProgSquare[i]) {
				notMatched = true;
				break;
			}
		}
		notMatched ? puts("NO") : puts("YES");
		// for (auto &num: nums) cout << num << " ";
		// cout << "\n";
		// for (auto &num: newProgSquare) cout << num << " ";
		// cout << "\n\n";
	}
}


/*
5
3 2 3
3 9 6 5 7 1 10 4 8
3 2 3
3 9 6 5 7 1 11 4 8
2 100 100
400 300 400 500
3 2 3
3 9 6 6 5 1 11 4 8
4 4 4
15 27 7 19 23 23 11 15 7 3 19 23 11 15 11 15
*/

/*
NO
YES
YES
NO
NO

*/