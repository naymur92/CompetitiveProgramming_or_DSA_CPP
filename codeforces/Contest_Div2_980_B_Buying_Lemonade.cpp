/*
https://codeforces.com/contest/2024/problem/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        long long n, k;

        cin >> n >> k;

        vector<long long> a(n);
        for (auto &a_i: a) cin >> a_i;

        sort(a.begin(), a.end());

        int press = 0;
        int loop_c = 0;

        long long i = 0;
        while (i < n && k > 0) {
            if (a[i] - loop_c > 0) {
                press += min(k, (n - i) * (a[i] - loop_c));
                k -= min(k, (n - i) * (a[i] - loop_c));

                loop_c += (a[i] - loop_c);
            } else {
                press++;
                i++;
            }
        }

        cout << press << "\n";
    }
}


/*
5
2 1
1 1
2 2
1 2
3 4
2 1 3
10 50
1 1 3 8 8 9 12 13 27 27
2 1000000000
1000000000 500000000

*/

/*
1
2
5
53
1000000000

*/