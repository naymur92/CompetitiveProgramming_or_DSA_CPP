/*
https://codeforces.com/contest/2027/problem/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n);

        for (int i = 0; i < n; ++i)
            cin >> a[i];

        int ans = n > 1 ? n : 0;
        for (int i = 0; i < n - 1; ++i) {                   
            int rm_count = 0;
            for (int j = i + 1; i < n - 1 && j < n; ++j) {
                while (j < n && a[i] >= a[j])
                    j++;

                if (j < n && a[i] < a[j])
                    rm_count++;
            }
            // cout << i << "=>" << a[i] << "=>" << (rm_count) << "\n";
            ans = min(rm_count + i, ans);

            while (i < n - 1 && a[i] == a[i + 1])
                i++;
        }
        
        cout << (ans) << "\n";
    }
}


/*
6
7
3 6 4 9 2 5 2
5
5 4 4 2 2
8
2 2 4 4 6 6 10 10
1
1000
9
6 8 9 10 12 9 7 5 4
7
300000000 600000000 400000000 900000000 200000000 400000000 200000000

*/

/*
2
0
6
0
4
2

*/