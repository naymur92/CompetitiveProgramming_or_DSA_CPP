/*
https://codeforces.com/contest/2051/problem/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, a, b, c;
        cin >> n >> a >> b >> c;

        int total = a + b + c;

        int days = (n / total) * 3;
        n %= total;

        if (n > 0) {
            n -= a;
            days++;
        }

        if (n > 0) {
            n -= b;
            days++;
        }

        if (n > 0) {
            days++;
        }

        cout << days << "\n";
    }
}


/*
4
12 1 5 3
6 6 7 4
16 3 4 1
1000000000 1 1 1

*/

/*
5
1
6
1000000000

*/