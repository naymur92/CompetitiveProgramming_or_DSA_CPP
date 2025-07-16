/*
https://codeforces.com/contest/2123/problem/D
*/

#include <bits/stdc++.h>

using namespace std;

void solve () {
    int n, k;
    cin >> n >> k;

    string s;
    cin >> s;

    int cnt = 0;
    for (int i = 0; i < n; ++i) cnt += s[i] - '0';

    if (cnt <= k || n < 2 * k) cout << "Alice\n";
    else cout << "Bob\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}


/*
6
5 2
11011
7 4
1011011
6 1
010000
4 1
1111
8 3
10110110
6 4
111111

*/

/*
Bob
Alice
Alice
Bob
Bob
Alice

*/