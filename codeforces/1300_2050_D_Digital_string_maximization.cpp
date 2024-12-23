/*
https://codeforces.com/problemset/problem/2050/D
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		string s;
		cin >> s;

		int n = s.size();
		for (int i = 0; i < n; ++i) {
			int best = s[i] - '0', sw_i = i;
			for (int j = i + 1; j < min(i + 10, n); ++j) {
				if (best < (s[j] - '0' - j + i)) {
					best = (s[j] - '0' - j + i);
					sw_i = j;
				}
			}

			// swap all elem from i to j
			while (i < sw_i) {
				swap(s[sw_i], s[sw_i - 1]);
				sw_i--;
			}
			s[i] = char(best + '0');
		}

		cout << s << "\n";
	}
}


/*
6
19
1709
11555
51476
9876543210
5891917899


*/

/*
81
6710
33311
55431
9876543210
7875567711

*/