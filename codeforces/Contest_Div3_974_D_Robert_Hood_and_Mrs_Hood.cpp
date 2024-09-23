/*
https://codeforces.com/contest/2014/problem/D
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n, d, k;
        cin >> n >> d >> k;

        vector<int> days(n, 0);
        for (int i = 0; i < k; ++i) {
            int l, r;
            cin >> l >> r;

            for (int i = l - 1; i < r; ++i) {
                days[i]++;
            }
        }
        vector<pair<int, int>> new_days(n);
        int min = days[0], max = days[0];
        for (int i = 0; i < n; ++i) {
            if (days[i] > max) max = days[i];
            new_days[i] = {days[i], i};
        }

        if (max <= 1) cout << 1 << " " << 1 << "\n";
        else {
            sort(new_days.begin(), new_days.end());

            // for (int i = 0; i < n; ++i) {
            //     cout << new_days[i].first << "=>(" << new_days[i].second << "), ";
            // }
            // cout << "\n";

            cout << new_days[n - d].second + 1 << " " << new_days[0].second + 1 << "\n";
        }
        
    }
}


/*
6
2 1 1
1 2
4 1 2
1 2
2 4
7 2 3
1 2
1 3
6 7
5 1 2
1 2
3 5
9 2 1
2 8
9 2 4
7 9
4 8
1 3
2 3

*/

/*
1 1
2 1
1 4
1 1
1 1
3 4

*/