/*
https://codeforces.com/problemset/problem/2048/C
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;

	while (t--) {
		string s;
		cin >> s;

		int l1 = 1, r1 = 1, l2 = 1, r2 = s.size();

		int l = 0;
		while (l < s.size() and s[l] != '0') l++;
		if (l != s.size()) {
			int part_size = s.size() - l;
			string part = s.substr(l, part_size);
			string max_p = part;

			for (int i = 0; i < l; ++i) {
				string curr = s.substr(i, part_size);
				for (int j = 0; j < part_size; ++j) {
					curr[j] = ((curr[j] - '0') ^ (part[j] - '0')) + '0';
				}
				if (curr > max_p) {
					max_p = curr;
					l1 = i + 1;
				}
			}
			// cout << max_p << "\n";
			r1 = l1 + part_size - 1;
		}

		cout << l1 << " " << r1 << " " << l2 << " " << r2 << "\n";
	}
}


/*
5
111
1000
10111
11101
1100010001101

*/

/*
2 2 1 3
1 3 1 4
1 5 1 4
3 4 1 5
1 13 1 11

*/