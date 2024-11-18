/*
https://codeforces.com/contest/2037/problem/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int k;
        cin >> k;

        map<int, int> a;

        for (int i = 0; i < k; ++i) {
            int ai;
            cin >> ai;
            a[ai]++;
        }

        int n = 1, m = (k - 2);

        while (true) {
            if (n != m) {
                if (a[n] > 0 and a[m] > 0 and n * m == k - 2)
                    break;
            } else {
                if (a[n] > 1 and n * m == k - 2)
                    break;
            }

            n++;
            m = (k - 2) / n;
        }

        cout << n << " " << m << "\n";
    }
}


/*
5
3
1 1 2
11
3 3 4 5 6 7 8 9 9 10 11
8
8 4 8 3 8 2 8 1
6
2 1 4 5 3 3
8
1 2 6 3 8 5 5 3

*/

/*
1 1
3 3
2 3
4 1
1 6
*/