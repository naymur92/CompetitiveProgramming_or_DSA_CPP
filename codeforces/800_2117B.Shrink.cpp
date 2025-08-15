/*
https://codeforces.com/problemset/problem/2117/B
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;

	/*vector<int> a;
	for (int i = 1; i <= n; i += 2) {
		a.push_back(i);
	}
	for (int i = n - n%2; i >= 2; i -= 2) {
		a.push_back(i);
	}

	for (int num: a) cout << num << " ";
	cout << "\n";*/

	for (int i = 2; i <= n; ++i) {
		cout << i << " ";
	}
	cout << 1 << "\n";
}

int main() {	
	int t;
	cin >> t;

	while (t--) {
		solve();
	}
}


/*
2
3
6

*/

/*
1 3 2
2 3 6 4 5 1

*/