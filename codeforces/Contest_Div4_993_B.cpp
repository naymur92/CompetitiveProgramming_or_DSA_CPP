/*
https://codeforces.com/contest/2044/problem/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        reverse(s.begin(), s.end());

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == 'p') s[i] = 'q';
            else if (s[i] == 'q') s[i] = 'p';
        }

        cout << s << "\n";
    }
}


/*
5
qwq
ppppp
pppwwwqqq
wqpqwpqwwqp
pqpqpqpq

*/

/*
pwp
qqqqq
pppwwwqqq
qpwwpqwpqpw
pqpqpqpq

*/