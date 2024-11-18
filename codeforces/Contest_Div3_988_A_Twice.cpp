/*
https://codeforces.com/contest/2037/problem/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n + 5);
        for (int i = 0; i < n; ++i) {
            int a_i;
            cin >> a_i;

            a[a_i]++;
        }

        int score = 0;
        for (int i = 0; i < n + 5; ++i) {
            score += a[i] / 2;
        }

        cout << score << "\n";
    }
}


/*
5
1
1
2
2 2
2
1 2
4
1 2 3 1
6
1 2 3 1 2 3

*/

/*
0
1
0
1
3

*/