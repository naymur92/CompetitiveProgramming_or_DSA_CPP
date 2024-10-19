/*
https://codeforces.com/problemset/problem/1841/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int q;
		cin >> q;

		int first_num, last_num;
		int op_no = 0;

		for (int i = 0; i < q; ++i) {
			int x;
			cin >> x;

			bool is_include = true;
			if (i == 0) {
				first_num = last_num = x;
			} else {
				if ((x >= last_num && op_no == 0) || (op_no == 1 && x <= first_num && x >= last_num)) {
					last_num = x;
				} else if (x <= first_num && op_no == 0) {
					op_no = 1;
					last_num = x;
				} else {
					is_include = false;
				}
			}
			cout << (is_include ? 1 : 0);
		}
		cout << "\n";
	}
}


/*
3
9
3 7 7 9 2 4 6 3 4
5
1 1 1 1 1
5
3 2 1 2 3

*/

/*
111110010
11111
11011

*/