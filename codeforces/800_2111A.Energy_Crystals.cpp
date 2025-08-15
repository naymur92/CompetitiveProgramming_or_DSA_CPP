/*
https://codeforces.com/problemset/problem/2111/A
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
	int x;
    cin >> x;

    cout << (((int)floor(log2(x)) + 1) * 2 + 1) << "\n";

    // int ans = 0;
    // while (x > 0) {
    //     x /= 2;
    //     ans++;
    // }

    // cout << ans * 2 + 1 << "\n";
}

int main() {
	int t;
	cin >> t;

	while (t--) {
		solve();
	}
}


/*
7
1
5
14
2025
31415
536870910
1000000000

*/

/*
3
7
9
23
31
59
61

*/