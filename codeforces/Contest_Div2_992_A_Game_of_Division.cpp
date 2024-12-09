/*
https://codeforces.com/contest/2040/problem/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;

        int a[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        bool is_possible = false;
        int indx;
        for (int i = 0; i < n; ++i)
        {
            int cn = 0;
            for (int j = 0; j < n; ++j)
            {
                if (i == j) continue;

                if (abs(a[i] - a[j]) % k != 0) {
                    cn++;
                }
            }

            if (cn == n - 1) {
                is_possible = true;
                indx = i;
                break;
            }
        }

        if (is_possible) {
            cout << "YES\n";
            cout << indx + 1 << "\n";
        } else {
            cout << "NO\n";
        }
    }
}


/*
7
3 2
1 2 3
4 2
1 2 4 5
5 3
10 7 3 4 5
5 3
1 31 15 55 36
2 1
17 17
2 2
17 18
1 3
6


*/

/*
YES
2
NO
YES
3
NO
NO
YES
2
YES
1


*/