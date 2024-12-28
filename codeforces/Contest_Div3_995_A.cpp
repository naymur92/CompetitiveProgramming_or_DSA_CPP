/*
https://codeforces.com/contest/2051/problem/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n], b[n];

        for (int i = 0; i < n; ++i) {
            cin >> a[i];
        }
        for (int i = 0; i < n; ++i) {
            cin >> b[i];
        }

        int diff = a[n - 1];
        for (int i = 0; i < n - 1; ++i) {
            if (a[i] > b[i + 1]) diff += a[i] - b[i + 1];
        }

        cout << diff << "\n";
    }
}


/*
4
2
3 2
2 1
1
5
8
3
1 1 1
2 2 2
6
8 2 5 6 2 6
8 2 7 4 3 4

   
*/

/*
4
5
1
16

*/