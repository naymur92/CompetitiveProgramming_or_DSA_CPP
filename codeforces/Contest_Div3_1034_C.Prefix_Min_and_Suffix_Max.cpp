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

        string s(n, '0');

        s[0] = s[n - 1] = '1';

        int left = a[0];
        for (int i = 1; i < n - 1 && left > a[i]; ++i) {
            left = a[i];
            s[i] = '1';
        }

        int right = a[n - 1];
        for (int i = n - 2; i > 0 && right < a[i]; --i) {
            right = a[i];
            s[i] = '1';
        }

        cout << s << "\n";
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