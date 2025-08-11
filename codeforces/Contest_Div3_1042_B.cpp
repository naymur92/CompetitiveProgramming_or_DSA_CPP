/*
https://codeforces.com/contest/2131/problem/B
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    cout << -1 << " " << (2 + (n > 2)) << " ";
    for (int i = 0; i < n - 2; ++i) {
        cout << ((i % 2) ? (2 + (i < n - 3)) : -1) << " ";
    }
    cout << "\n";
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
2
3


*/

/*
-1 2
-1 3 -1

*/