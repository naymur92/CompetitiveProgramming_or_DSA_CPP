/*
https://codeforces.com/contest/2123/problem/C
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
        for (int &num: a) cin >> num;

        vector<int> forward(n);
        vector<int> backward(n);

        forward[0] = a[0];
        backward[n - 1] = a[n - 1];

        for (int i = 1; i < n; ++i) {
            forward[i] = min(forward[i - 1], a[i]);
        }

        for (int i = n - 2; i >= 0; --i) {
            backward[i] = max(backward[i + 1], a[i]);
        }

        /*for (int i = 0; i < n; ++i) {
            cout << forward[i] << " \n"[i == n - 1];
        }
        for (int i = 0; i < n; ++i) {
            cout << backward[i] << " \n"[i == n - 1];
        }*/

        for (int i = 0; i < n; ++i)  {
            if (forward[i] < a[i] && backward[i] > a[i]) cout << 0;
            else cout << 1;
        }
        cout << "\n";
    }
}


/*

3
6
1 3 5 4 7 2
4
13 10 12 20
7
1 2 3 4 5 6 7

*/

/*
100011
1101
1000001

*/