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

        int k = 0;
        bool is_possible = false;
        for (int i = 0; i < n; ++i)
        {
            int l, r;
            cin >> l >> r;

            if (l - k >= s) is_possible = true;

            k = r; 
        }
        if (m - k >= s) is_possible = true;

        if (is_possible) cout << "YES\n";
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