/*
https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P40
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, q;
    cin >> n >> q;

    int c[n];
    int ps[n + 1];
    ps[0] = 0;
    for (int i = 0; i < n; ++i) {
        cin >> c[i];

        ps[i + 1] = ps[i] + c[i];
    }

    while (q--) {
        int a, b;
        cin >> a >> b;

        cout << (ps[b + 1] - ps[a]) << "\n";
    }
}

int main() {
	solve();
}

/*
5 3
7 9 28 23 26
4 4
0 2
1 3


26
44
60

//////////////
10 5
1 1 1 1 1 1 1 1 1 1
0 2
2 7
1 2
4 6
7 8

3
6
2
3
2


*/