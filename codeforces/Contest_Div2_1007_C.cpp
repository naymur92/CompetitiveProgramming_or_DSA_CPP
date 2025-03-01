/*
https://codeforces.com/contest/2071/problem/C
*/

#include <bits/stdc++.h>

using namespace std;

void dfs(int node, int parent, vector<vector<int>> &g, vector<vector<int>> &dis, vector<int> &depth) {
    depth[node] = depth[parent] + 1;
    dis[depth[node]].push_back(node);

    for (int child: g[node]) {
        if (child == parent) continue;

        dfs(child, node, g, dis, depth);
    }
}

void solve() {
    int n, st, en;
    cin >> n >> st >> en;

    vector<vector<int>> g(n + 1);
    for (int i = 0; i < n - 1; ++i) {
        int u, v;
        cin >> u >> v;
        g[u].push_back(v);
        g[v].push_back(u);
    }

    vector<vector<int>> dis(n + 1);
    vector<int> depth(n + 1);

    dfs(en, 0, g, dis, depth);

    for (int i = n; i >= 1; i--) {
        for (int v: dis[i]) {
            cout << v << " ";
        }
    }
    cout << "\n";
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
1 1 1
2 1 2
1 2
3 2 2
1 2
2 3
6 1 4
1 2
1 3
4 5
5 6
1 4

*/

/*
1 
1 2 
3 1 2 
1 4 3 2 6 5
*/