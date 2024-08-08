/*
https://codeforces.com/contest/1999/problem/C
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        int n, s, m;
        cin >> n >> s >> m;

        vector<int> time_slot(m, 1);

        for (int i = 0; i < n; ++i)
        {
            int l, r;
            cin >> l >> r;

            for (int j = l; j < r; ++j)
            {
                time_slot[j] = 0;
            }
        }

        // for (auto &mn: time_slot) cout << mn << " ";
        // cout << "\n";

        int free_time = 0;
        for (int i = 0; i < m; ++i)
        {
            if (free_time == s) break;

            if (time_slot[i]) free_time++;
            else free_time = 0;
        }

        if (free_time == s) cout << "YES\n";
        else cout << "NO\n";
    }
}


/*
4
3 3 10
3 5
6 8
9 10
3 3 10
1 2
3 5
6 7
3 3 10
1 2
3 5
6 8
3 4 10
1 2
6 7
8 9

*/

/*
YES
YES
NO
YES


*/