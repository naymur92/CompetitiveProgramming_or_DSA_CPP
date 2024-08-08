/*
https://codeforces.com/contest/1999/problem/D
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--) {
        string s, x;

        cin >> s >> x;

        int j = 0;

        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '?') {
                if (j < x.size()) s[i] = x[j++];
                else s[i] = s[i - 1];
            }
            else if (s[i] == x[j++])

            // if (j >= x.size()) j = x.size() - 1;
        }

    }
}


/*
5
?????
xbx
ab??e
abcde
ayy?x
a
ab??e
dac
paiu
mom

*/

/*
YES
xabax
YES
abcde
YES
ayyyx
NO
NO

*/