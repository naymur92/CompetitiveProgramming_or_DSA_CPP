/*
https://codeforces.com/contest/2131/problem/E
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<unsigned int> a(n), b(n);
    for (auto &x : a) cin >> x;
    for (auto &x : b) cin >> x;

    if (a[n - 1] != b[n - 1]) {
        cout << "NO\n";
        return;
    }

    bool ok = true;
    for (int i = 0; i < n - 1; i++) {
        int x = a[i] ^ b[i];
        if (x != 0 && x != a[i + 1] && x != b[i + 1]) {
            cout << "NO\n";
            return;
        }
    }

    cout << "YES\n";
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
5
1 2 3 4 5
3 2 7 1 5
3
0 0 1
1 0 1
3
0 0 1
0 0 0
4
0 0 1 2
1 3 3 2
6
1 1 4 5 1 4
0 5 4 5 5 4
3
0 1 2
2 3 2
2
10 10
11 10

*/

/*
YES
NO
NO
NO
YES
NO
NO

*/