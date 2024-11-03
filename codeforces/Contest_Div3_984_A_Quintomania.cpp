/*
https://codeforces.com/contest/2036/problem/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
            cin >> a[i];

        bool is_pos = true;
        for (int i = 0; i < n - 1; ++i) {
            int diff = abs(a[i] - a[i + 1]);

            if (diff != 7 && diff != 5) {
                is_pos = false;
                break;
            }
        }
        cout << (is_pos ? "YES\n" : "NO\n");
    }
}


/*
8
2
114 109
2
17 10
3
76 83 88
8
38 45 38 80 85 92 99 106
5
63 58 65 58 65
8
117 124 48 53 48 43 54 49
5
95 102 107 114 121
10
72 77 82 75 70 75 68 75 68 75
    
*/

/*
YES
YES
YES
NO
YES
NO
YES
YES

*/