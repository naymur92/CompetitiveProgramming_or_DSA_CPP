/*
https://codeforces.com/contest/2032/problem/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        int cnt_on = 0;
        for (int i = 0; i < 2 * n; ++i) {
            int a_i;
            cin >> a_i;

            if (a_i == 1)
                cnt_on++;
        }

        int min_val = cnt_on % 2;
        int max_val = cnt_on;

        if (max_val > n)
            max_val = n - (max_val - n);

        cout << min_val << " " << max_val << "\n";
    }
}


/*
5
1
0 0
1
0 1
1
1 1
3
0 0 1 0 1 0
3
0 1 1 1 0 0

*/

/*
0 0
1 1
0 0
0 2
1 3

*/