/*
https://codeforces.com/contest/2032/problem/C
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<long> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];
        sort(a.begin(), a.end());

        int ans = n;
        for (int i = 0; i < n - 1; ++i) {
            int s = a[i] + a[i + 1];

            int pos = lower_bound(a.begin() + i + 1, a.end(), s) - a.begin();
            ans = min(ans, n - pos + i);
        }
        cout << ans << "\n";
    }
}


/*
4
7
1 2 3 4 5 6 7
3
1 3 2
3
4 5 3
15
9 3 8 1 6 5 3 8 2 1 4 2 9 4 7

*/

/*
3
1
0
8

*/