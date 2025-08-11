/*
https://codeforces.com/contest/2131/problem/A
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    vector<int> b(n);

    for (int &num: a) cin >> num;
    for (int &num: b) cin >> num;

    int cnt = 1;
    for (int i = 0; i < n; ++i) {
        cnt += max(0, a[i] - b[i]);
    }

    cout << cnt << "\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}


/*
4
2
7 3
5 6
3
3 1 4
3 1 4
1
10
1
6
1 1 4 5 1 4
1 9 1 9 8 1

*/

/*
3
1
10
7

*/