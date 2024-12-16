/*
https://codeforces.com/contest/2044/problem/C
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long m, a, b, c;
        cin >> m >> a >> b >> c;

        long long sit_1, sit_2;
        sit_1 = min(m, a);
        sit_2 = min(m, b);

        long long ans = sit_1 + sit_2;
        ans = ans + min((m * 2 - ans), c);

        cout << ans << "\n";
    }
}


/*
5
10 5 5 10
3 6 1 1
15 14 12 4
1 1 1 1
420 6 9 69

*/

/*
20
5
30
2
84

*/