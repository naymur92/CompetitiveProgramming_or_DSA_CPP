/*
https://codeforces.com/contest/2051/problem/C
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k;
        cin >> n >> m >> k;

        vector<int> a(n), q(n + 1);

        for (int i = 0; i < m; ++i) {
            cin >> a[i];
        }

        for (int i = 0; i < k; ++i) {
            int k_i;
            cin >> k_i;
            q[k_i]++;
        }

        if (n - k > 1) {
            for (int i = 0; i < m; ++i) {
                cout << 0;
            }
        } else if (n == k) {
            for (int i = 0; i < m; ++i) {
                cout << 1;
            }
        } else {
            for (int i = 0; i < m; ++i) {
                if (q[a[i]] == 0) cout << 1;
                else cout << 0;
            }
        }

        cout << "\n";
    }
}


/*
4
4 4 3
1 2 3 4
1 3 4
5 4 3
1 2 3 4
1 3 4
4 4 4
1 2 3 4
1 2 3 4
2 2 1
1 2
2

*/

/*
0100
0000
1111
10

*/