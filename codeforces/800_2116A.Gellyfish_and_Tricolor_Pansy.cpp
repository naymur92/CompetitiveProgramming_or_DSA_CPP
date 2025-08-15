/*
https://codeforces.com/problemset/problem/2116/A
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
	int a, b, c, d;
	cin >> a >> b >> c >> d;

	bool gelly_win = true;
	
	if (min(a, c) < min(b, d)) gelly_win = false;

	cout << (gelly_win ? "Gellyfish\n" : "Flower\n");
}

int main() {	
	int t;
	cin >> t;

	while (t--) {
		solve();
	}
}


/*
5
1 2 3 4
100 999 1 1
10 20 10 30
12 14 13 11
998 244 353 107

*/

/*
Flower
Gellyfish
Flower
Gellyfish
Gellyfish

*/