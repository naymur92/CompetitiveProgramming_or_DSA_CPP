/*
https://codeforces.com/problemset/problem/2002/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		int n;
		cin >> n;

		vector<int> a(n), b(n);

		for (int i = 0; i < n; ++i)
			cin >> a[i];

		for (int i = 0; i < n; ++i)
			cin >> b[i];

		bool is_bob_win = true;

		if (a != b) {
			reverse(a.begin(), a.end());

			if (a != b)
				is_bob_win = false;
		}

		cout << (is_bob_win ? "Bob\n" : "Alice\n");
	}
}


/*
2
2
1 2
1 2
3
1 2 3
2 3 1

*/

/*
Bob
Alice

*/