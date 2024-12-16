/*
https://codeforces.com/contest/2044/problem/E
*/

#include <bits/stdc++.h>

using namespace std;

long long count_pairs(long long k, long long l1, long long r1, long long l2, long long r2) {
    long long count = 0;
    long long power = 1;

    while (power <= r2) { 
        // Calculate valid range for x
        long long min_x = max(l1, (l2 + power - 1) / power); // Ceil(l2 / power)
        long long max_x = min(r1, r2 / power);

        // Count valid x values in range
        if (min_x <= max_x) {
            count += (max_x - min_x + 1);
        }

        // Prevent overflow of power
        if (power > r2 / k) break;
        power *= k;
    }
    return count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long k, l1, r1, l2, r2;
        cin >> k >> l1 >> r1 >> l2 >> r2;
        cout << count_pairs(k, l1, r1, l2, r2) << "\n";
    }
}


/*
5
2 2 6 2 12
2 1 1000000000 1 1000000000
3 5 7 15 63
1000000000 1 5 6 1000000000
15 17 78 2596 20914861

*/

/*
12
1999999987
6
1
197

*/