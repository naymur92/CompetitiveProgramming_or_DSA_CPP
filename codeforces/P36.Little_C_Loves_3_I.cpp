/*
https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P36
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
	cin >> n;

	int a, b, c;

	if ((n - 2) % 3 == 0) {
		a = 1, b = 2, c = n - 3;
	} else {
		a = 1, b = 1, c = n - 2;
	}

	cout << a << " " << b << " " << c << '\n';
}

int main() {
	solve();
}

/*
3

1 1 1

//////////////
233

77 77 79


*/