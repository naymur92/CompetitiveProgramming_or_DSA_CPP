/*
https://codeforces.com/problemset/problem/1567/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {	
	int t;
	cin >> t;

	vector<int> xors(3e5 + 10);
	for (int i = 1; i < 3e5 + 10; ++i) {
		xors[i] = xors[i - 1] ^ i;
	}

	while(t--) {
		int a, b;
		cin >> a >> b;

		if (xors[a - 1] == b) {
			cout << a << "\n";
		} else {
			int newVal = xors[a - 1] ^ b;

			if (newVal == a)
				cout << a + 2 << "\n";
			else
				cout << a + 1 << "\n";
		}
	}
}


/*
5
1 1
2 1
2 0
1 10000
2 10000

*/

/*
3
2
3
2
3

*/