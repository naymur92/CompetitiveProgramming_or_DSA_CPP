/*
https://codeforces.com/contest/2032/problem/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, k;
        cin >> n >> k;

        int med = (n + 1) / 2;
        if ((k == 1 || k == n) && n != 1)
            cout << -1 << "\n";
        else if (med == k)
            cout << 1 << "\n" << 1 << "\n";
        else {
            int m = 3;
            if ((n - k) % 2 == 0)
                m = 5;

            cout << m << "\n";

            cout << 1 << " ";
            if (m == 3)
                cout << k << " " << k + 1 << " ";
            else {
                cout << k - 1 << " " << k << " " << k + 1 << " " << k + 2 << "\n";
            }
        }
    }
}


/*
4
1 1
3 2
3 3
15 8

*/

/*
1
1
3
1 2 3
-1
5
1 4 7 10 13

*/