/*
https://codeforces.com/contest/2131/problem/C
*/

#include <bits/stdc++.h>

using namespace std;
using ll = long long;

void solve() {
    int n;
    ll k;
    cin >> n >> k;
    unordered_map<ll,int> cntS, cntT;
    cntS.reserve(n*2);
    cntT.reserve(n*2);

    for (int i = 0; i < n; ++i) {
        ll x; cin >> x;
        ll r = x % k;
        ll key = (r == 0 ? 0 : min(r, k - r));
        ++cntS[key];
    }
    for (int i = 0; i < n; ++i) {
        ll x; cin >> x;
        ll r = x % k;
        ll key = (r == 0 ? 0 : min(r, k - r));
        ++cntT[key];
    }

    if (cntS == cntT) cout << "YES\n"; 
    else cout << "NO\n";
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
1 3
1
2
1 8
4
12
3 5
6 2 9
8 4 11
2 7
2 8
2 9
3 2
0 1 0
1 0 1

*/

/*
YES
YES
YES
NO
NO

*/