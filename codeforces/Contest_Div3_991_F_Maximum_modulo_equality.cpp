/*
https://codeforces.com/contest/2050/problem/F
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }
        while (q--)
        {
            int l, r;
            cin >> l >> r;
            l--, r--;

            bool all_equal = true;
            for (int i = l + 1; i <= r; ++i)
            {
                if (a[i] != a[i - 1]) {
                    all_equal = false;
                    break;
                }
            }

            if (all_equal) {
                cout << 0 << " ";
            } else {
                int max_elem = *max_element(a.begin() + l, a.begin() + r + 1);
                // cout << max_elem << " ";
                while (--max_elem) {
                    bool found = true;
                    int m = a[l] % max_elem;
                    for (int i = l + 1; i <= r; ++i)
                    {
                        if ((a[i] % max_elem) != m) {
                            found = false;
                            break;
                        }
                    }
                    if (found) break;
                }
                cout << max_elem << " ";
            }
        }
        cout << "\n";
    }
}


/*
3
5 5
5 14 2 6 3
4 5
1 4
2 4
3 5
1 1
1 1
7
1 1
3 2
1 7 8
2 3
1 2

*/

/*
3 1 4 1 0 
0 
1 6 

*/