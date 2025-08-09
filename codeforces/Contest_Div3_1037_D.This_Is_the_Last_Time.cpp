/*
https://codeforces.com/contest/2126/problem/D
*/

#include <bits/stdc++.h>

using namespace std;

void solve () {
    int n, k;
    cin >> n >> k;

    map<pair<int, int>, int> mp;
    for (int i = 0; i < n; ++i) {
        int l, r, real;
        cin >> l >> r >> real;

        mp[{l, r}] = max(real, mp[{l, r}]);
    }

    for (auto it: mp) {
        auto lr = it.first;
        int real = it.second;

        if (lr.first <= k && k <= lr.second) k = max(k, real);
    }

    cout << k << "\n";
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
3 1
2 3 3
1 2 2
3 10 10
1 0
1 2 2
1 2
1 2 2
2 2
1 3 2
2 4 4
2 5
1 10 5
3 6 5

*/

/*
10
0
2
4
5


*/