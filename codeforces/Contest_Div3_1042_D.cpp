/*
https://codeforces.com/contest/2131/problem/D
*/

#include <bits/stdc++.h>

using namespace std;

void solve() {
    int n;
    cin >> n;

    vector<vector<int>> g(n);
    vector<int> deg(n,0);
    for (int i = 0; i < n-1; ++i) {
        int u, v;
        cin >> u >> v;
        --u; --v;

        g[u].push_back(v);
        g[v].push_back(u);
        deg[u]++; deg[v]++;
    }

    if (n == 2) {
        cout << 0 << '\n';
        return;
    }
    // collect leaves
    int total_leaves = 0;
    vector<int> is_leaf(n,0);
    for (int i = 0; i < n; ++i) {
        if (deg[i] == 1) {
            is_leaf[i] = 1;
            ++total_leaves;
        }
    }
    int bestAdjLeaves = 0;
    for (int v = 0; v < n; ++v) {
        int cnt = 0;
        for (int u : g[v]) if (is_leaf[u]) ++cnt;
        bestAdjLeaves = max(bestAdjLeaves, cnt);
    }
    cout << (total_leaves - bestAdjLeaves) << '\n';
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
4
1 2
1 3
2 4
2
2 1
4
1 2
2 3
2 4
11
1 2
1 3
2 4
3 5
3 8
5 6
5 7
7 9
7 10
5 11


*/

/*
1
0
0
4

*/