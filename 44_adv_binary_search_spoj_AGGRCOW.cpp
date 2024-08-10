// https://www.spoj.com/problems/AGGRCOW/

#include <bits/stdc++.h>
using namespace std;

const int N = 1e5 + 10;

int n, cows;
int positions[N];

bool isCowPlaced(int minDist) {
	int cows_c = cows;
	int last_pos = -1;

	for (int i = 0; i < n; ++i) {
		if (positions[i] - last_pos >= minDist || last_pos == -1) {
			cows_c--;
			last_pos = positions[i];
		}
		if (cows_c == 0) break;
	}

	return cows_c == 0;
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		cin >> n >> cows;

		for (int i = 0; i < n; ++i) {
			cin >> positions[i];
		}
		sort(positions, positions + n);
		
		int low = 0, high = 1e9, mid;
		while (high - low > 1) {
			mid = (high + low) / 2;

			if (isCowPlaced(mid)) {
				low = mid;
			} else {
				high = mid - 1;
			}
		}

		if (isCowPlaced(high)) cout << high << "\n";
		else cout << low << "\n";
	}
}

/*
1
5 3
1
2
8
4
9
*/

/*
3
*/