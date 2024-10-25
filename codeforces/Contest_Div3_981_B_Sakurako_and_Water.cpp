/*
https://codeforces.com/contest/2033/problem/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        vector<vector<int>> a(n, vector<int> (n));

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> a[i][j];
            }
        }

        int steps = 0;

        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (a[i][j] < 0) {
                    int k = n - max(i, j) - 1;
                    int add = a[i][j] * (-1);
                    steps += add;

                    for (int l = 0; l <= k; ++l) {
                        a[i + l][j + l] += add;
                    }
                }
            }
        }

        // for (int i = 0; i < n; ++i) {
        //     for (int j = 0; j < n; ++j) {
        //         cout << a[i][j] << " ";
        //     }
        //     cout << "\n";
        // }
        // cout << "\n";

        cout << steps << "\n";
    }
}


/*
4
1
1
2
-1 2
3 0
3
1 2 3
-2 1 -1
0 0 -1
5
1 1 -1 -1 3
-3 1 4 4 -4
-1 -1 3 0 -5
4 5 3 -3 -1
3 1 -3 -1 5

*/

/*
0
1
4
19

*/