/*
https://codeforces.com/contest/2126/problem/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        vector<int> a(n);

        for (int i = 0; i < n; ++i) cin >> a[i];

        // another solution
        vector<int> s(n + 1);
        for (int i = 0; i < n; ++i) {
            s[i + 1] = s[i] + a[i];
        }

        int ans = 0, x = 0;
        while (x + k <= n) {
            if (s[x + k] == s[x]) {
                x += (k + 1);
                ans++;
            } else {
                x++;
            }
        }

        cout << ans << "\n";

        // first solution
        /*int hike_cnt = 0;
        for (int i = 0; i < n; ++i) {
            int cnt = 0;
            for (int j = 0; j < k && i + j < n; ++j) {
                if (a[i + j] == 1) {
                    break;
                }
                cnt++;
            }
            if (cnt == k) {
                hike_cnt++;
                i += k;
            }
        }

        cout << hike_cnt << "\n";*/
    }
}


/*
5
5 1
0 1 0 0 0
7 3
0 0 0 0 0 0 0
3 1
1 1 1
4 2
0 1 0 1
6 2
0 0 1 0 0 0

*/

/*
3
2
0
0
2
*/