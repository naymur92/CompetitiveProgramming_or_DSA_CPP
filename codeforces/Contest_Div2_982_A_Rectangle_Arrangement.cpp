/*
https://codeforces.com/contest/2027/problem/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        int max_w = 0, max_h = 0;
        for (int i = 0; i < n; ++i) {
            int w, h;
            cin >> w >> h;

            max_w = max(max_w, w);
            max_h = max(max_h, h);
        }

        cout << 2 * (max_w + max_h) << "\n";
    }
}


/*
5
5
1 5
2 4
3 3
4 2
5 1
3
2 2
1 1
1 2
1
3 2
3
100 100
100 100
100 100
4
1 4
2 3
1 5
3 2

*/

/*
20
8
10
400
16

*/