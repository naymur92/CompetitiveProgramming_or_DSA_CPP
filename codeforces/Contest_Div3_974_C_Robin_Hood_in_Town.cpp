/*
https://codeforces.com/contest/2014/problem/C
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        vector<int> golds(n);
        long long total = 0;
        for (int i = 0; i < n; ++i) {
            long long g;
            cin >> g;
            total += g;

            golds[i] = g;
        }

        if (n < 3) {
            cout << -1 << "\n";
        } else {
            sort(golds.begin(), golds.end());

            long long mid = golds[n / 2];
            if (total > mid * n * 2) {
                cout << 0 << "\n";
            } else {
                long long equal = mid * n * 2 - total;
                cout << equal + 1 << "\n";
            }
        }
    }
}


/*
6
1
2
2
2 19
3
1 3 20
4
1 2 3 4
5
1 2 3 4 5
6
1 2 1 1 1 25

*/

/*
-1
-1
0
15
16
0

*/