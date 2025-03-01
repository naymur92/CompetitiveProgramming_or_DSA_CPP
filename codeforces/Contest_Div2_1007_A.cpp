/*
https://codeforces.com/contest/2071/problem/A
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    if (n % 3 == 1) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}


/*
4
1
2
333
1000000000

*/

/*
YES
NO
NO
YES

*/