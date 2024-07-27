/*
https://codeforces.com/contest/1996/problem/C
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n, q;
        cin >> n >> q;
        string a, b;
        cin >> a >> b;

        vector<vector<int>> ps_a(n + 1, vector<int>(26));    // prefix sum of a
        vector<vector<int>> ps_b(n + 1, vector<int>(26));    // prefix sum of b

        for (int i = 0; i < n; ++i) {
            vector<int> tmp_a = ps_a[i];
            tmp_a[a[i] - 'a']++;
            ps_a[i + 1] = tmp_a;

            vector<int> tmp_b = ps_b[i];
            tmp_b[b[i] - 'a']++;
            ps_b[i + 1] = tmp_b;
        }

        while(q--) {
            int l, r;
            cin >> l >> r;

            vector<int> part_a(26);
            vector<int> part_b(26);

            for (int i = 0; i < 26; ++i) {
                part_a[i] = ps_a[r][i] - ps_a[l - 1][i];
                part_b[i] = ps_b[r][i] - ps_b[l - 1][i];
            }

            int op = 0;
            for (int i = 0; i < 26; ++i) {
                int diff = part_a[i] - part_b[i];

                if (diff > 0) op += diff;
            }
            cout << op << "\n";
        }
    }
}


/*
3
5 3
abcde
edcba
1 5
1 4
3 3
4 2
zzde
azbe
1 3
1 4
6 3
uwuwuw
wuwuwu
2 4
1 3
1 6

*/

/*
0
1
0
2
2
1
1
0

*/