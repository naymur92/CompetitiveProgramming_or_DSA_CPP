/*
https://codeforces.com/contest/2051/problem/D
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        long long x, y;

        cin >> n >> x >> y;

        unsigned long long sum = 0;

        vector<int> a(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            sum += a[i];
        }

        long long min_sum = sum - y;
        long long max_sum = sum - x;

        long long pairs = 0;
        sort(a.begin(), a.end());

        for (int i = 0; i < n - 1; ++i) {
            if (a[i] + a[i + 1] > max_sum) break;
            if (a[i] + a[n - 1] < min_sum) continue;

            int lower_i = upper_bound(a.begin() + i + 1, a.end(), min_sum - a[i] - 1) - a.begin();
            int upper_i = lower_bound(a.begin() + lower_i, a.end(), max_sum - a[i] + 1) - a.begin();

            pairs += (upper_i - lower_i);
        }

        cout << pairs << "\n";
    }
}


/*
7
4 8 10
4 6 3 6
6 22 27
4 9 6 3 4 5
3 8 10
3 2 1
3 1 1
2 3 4
3 3 6
3 2 1
4 4 12
3 3 2 1
6 8 8
1 1 2 2 2 3

*/

/*
4
7
0
0
1
5
6

*/