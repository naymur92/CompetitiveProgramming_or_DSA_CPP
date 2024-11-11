/*
https://codeforces.com/contest/2028/problem/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, b, c;
        cin >> n >> b >> c;

        long long ans = -1;

        if (c >= n) {
            ans = n;
        } else if (b == 0) {
            if (c >= n - 2)
                ans = n - 1;
        } else if (b == 1) {
            ans = c;
        } else {
            ans = n - ((n - 1 - c) / b + 1);
        }

        cout << ans << "\n";
    }
}


/*
7
10 1 0
1 2 3
100 2 1
3 0 1
3 0 0
1000000000000000000 0 0
1000000000000000000 1000000000000000000 1000000000000000000

*/

/*
0
1
50
2
-1
-1
1000000000000000000

*/