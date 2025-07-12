/*
https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P42
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n, m;
    cin >> n >> m;

    int sum = 0;
    int mx = -1, mn = INT_MAX;

    for (int i = 0; i < n; ++i) {
        int num;
        cin >> num;

        sum += num;
        mx = max(mx, num);
        mn = min(mn, num);
    }

    int lower = ceil(((sum + m) * 1.0) / n);

    cout << max(mx, lower) << " " << (mx + m) << "\n";
}

int main() {
	solve();
}

/*
3
7
1
6
5


7 13



//////////////



*/