/*
https://codeforces.com/contest/2027/problem/C
*/

#include <bits/stdc++.h>

using namespace std;

bool cmp(pair<int, long> &a, pair<int, long> &b) {
    if (a.second - a.first == b.second - b.first)
        return a.first < b.first;
    return a.second - a.first < b.second - b.first;
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<long> a(n);
        vector<pair<int, long>> p;

        for (int i = 0; i < n; ++i) {
            cin >> a[i];

            if (i > 0 && a[i] >= n - i)
                p.push_back(make_pair(n - i, a[i]));
        }

        sort(p.begin(), p.end(), cmp);

        int ans = 0;
        int p_size = p.size();
        for (int i = 0; i < p_size; ++i) {
            int add = 0;
            if (p[i].first == p[i].second) {
                add = (n - p[i].first);

                for (int j = i + 1; j < p_size; ++j) {
                    if ((p[j].first + add) == p[j].second) {
                        add += (n - p[j].first);
                    }
                }
                ans = max(ans, add);
            }
            // cout << p[i].first << "=>" << add << "\n";
        }
        // cout << "\n";

        // for (int i = 0; i < p.size(); ++i) {
        //     cout << p[i].first << "=>" << p[i].second << "\n";
        // }
        // cout << "\n";

        /*wrong ans in test 2*/

        cout << n + ans << "\n";
    }
}


/*
4
5
2 4 6 2 5
5
5 4 4 5 1
4
6 8 2 3
1
1

*/

/*
10
11
10
1

*/