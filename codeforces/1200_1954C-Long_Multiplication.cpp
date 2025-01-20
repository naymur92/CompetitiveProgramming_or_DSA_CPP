/*
https://codeforces.com/problemset/problem/1954/C
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	while (t--) {
		string x, y;
		cin >> x >> y;

		int n = x.size();

		bool is_x_larger = x > y;
		bool find_larger = false;

		for (int i = 0; i < n; ++i) {
			if (x[i] == y[i]) continue;

			if (!find_larger && x[i] != y[i]) {
				find_larger = true;
				continue;
			}

			/*
			(is_x_larger && x[i] > y[i]) || (!is_x_larger && x[i] < y[i])
			let, A = is_x_larger B = x[i] > y[i]
			=> AB + A'B'
			=> (A ^ B)' ====> (A XOR B)'
			*/

			if (!(is_x_larger ^ x[i] > y[i])) {
				swap(x[i], y[i]);
			}
		}

		cout << x << "\n" << y << "\n";
	}
}


/*
3
73
31
2
5
3516
3982

*/

/*
71
33
5
2
3912
3586

*/