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

        /*first solution*/
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

        /*another solution*/
        /*for (int i = 0; i < n; ++i) {
            int x = 0, y = 0;
            
            for (int l = 0; l < n - i; ++l) {
                x = min(x, a[i + l][l]);
            }
            if (x < 0)
                steps += abs(x);

            if (i > 0) {
                for (int l = 0; l < n - i; ++l) {
                    y = min(y, a[l][i + l]);
                }
                if (y < 0)
                    steps += abs(y);
            }
        }*/


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