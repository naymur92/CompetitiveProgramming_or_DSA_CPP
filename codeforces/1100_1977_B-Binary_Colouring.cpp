/*
https://codeforces.com/problemset/problem/1977/B
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

		int maxSetBit = floor(log2(n)) + 1;

		vector<int> numbers(32);
		for (int i = 0; i < maxSetBit; ++i) {
			numbers[i] = ((n>>i) & 1);
		}

		/*for (int i = 0; i < 32; ++i) {
			cout << numbers[i] << " \n"[i == 31];
		}*/

		for (int i = 0; i + 1 < 32; ++i) {
			if (numbers[i] == 1 and numbers[i] == numbers[i + 1]) {
				numbers[i] = -1;
				while (i + 1 < 32 and numbers[i + 1] == 1) {
					numbers[++i] = 0;
				}
				numbers[i + 1] = 1;
				i--;
			}
		}

		cout << 32 << "\n";
		for (int i = 0; i < 32; ++i) {
			cout << numbers[i] << " \n"[i == 31];
		}
	}
}


/*
7
1
14
24
15
27
11
19

*/

/*
1
1
5
0 -1 0 0 1
6
0 0 0 -1 0 1
5
-1 0 0 0 1
6
-1 0 -1 0 0 1
5
-1 0 -1 0 1
5
-1 0 1 0 1
*/