/*
https://codeforces.com/contest/2126/problem/C
*/

#include <bits/stdc++.h>

using namespace std;

void solve () {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);

    for (int i = 0; i < n; ++i) cin >> a[i];

    /*int curr_level = a[k - 1];
    int water_level = 1;

    sort(a.begin(), a.end());


    int i = 0;
    while (a[i] != curr_level) i++;

    for (int j = i + 1; j < n; ++j) {
        int diff = a[j] - curr_level;

        if (water_level + diff - 1 > curr_level) {
            cout << "NO\n";
            return;
        }

        curr_level = a[j];
        water_level += diff;
    }

    cout << "YES\n";*/

    // another efficient solution
    int curr_level = a[k - 1];
    sort(a.begin(), a.end());
    a.erase(unique(a.begin(), a.end()), a.end());

    for (int i = 0; i < a.size() - 1; ++i) {
        if (a[i] >= curr_level) {
            if (a[i + 1] - a[i] > curr_level) {
                cout << "NO\n";
                return;
            }
        }
    }

    cout << "YES\n";
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
}


/*
5
5 3
3 2 1 4 5
3 1
1 3 4
4 4
4 4 4 2
6 2
2 3 6 9 1 2
4 2
1 2 5 6

*/

/*
YES
NO
YES
YES
NO

*/