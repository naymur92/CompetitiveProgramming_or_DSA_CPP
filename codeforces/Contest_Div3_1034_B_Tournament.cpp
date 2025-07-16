/*
https://codeforces.com/contest/2123/problem/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, j, k;
        cin >> n >> j >> k;

        j--;

        vector<int> a(n);
        for (int &num: a) cin >> num;

        int aj = a[j];

        sort(a.begin(), a.end());

        /*auto it = unique(a.begin(), a.end());
        a.erase(it, a.end());*/

        /*for (int i = 0; i < a.size(); ++i) {
            cout << a[i] << " ";
        }
        cout << "\n";*/

        if (k == 1 && a[n - 1] != aj) cout << "NO\n";
        else cout << "YES\n";
    }
}


/*
3
5 2 3
3 2 4 4 1
5 4 1
5 3 4 5 2
6 1 1
1 2 3 4 5 6

*/

/*
YES
YES
NO

*/