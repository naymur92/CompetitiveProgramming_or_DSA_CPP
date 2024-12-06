/*
https://codeforces.com/contest/2050/problem/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n, m;
        cin >> n >> m;

        vector<int> a(n);
        for (int i = 0; i < n; ++i)
        {
            string s;
            cin >> s;
            a[i] = s.size();
        }

        int cnt = 0;
        for (int i = 0; i < n; ++i)
        {
            if (a[i] > m) break;
            m -= a[i];
            cnt++;
        }
        cout << cnt << "\n";
    }
}


/*
5
3 1
a
b
c
2 9
alpha
beta
4 12
hello
world
and
codeforces
3 2
ab
c
d
3 2
abc
ab
a

*/

/*
1
2
2
1
0

*/