/*
https://codeforces.com/contest/2036/problem/C
*/

#include <bits/stdc++.h>

using namespace std;

bool match_str(string &s, int pos) {
    if (pos < 0 || pos >= s.size() - 3)
        return false;

    return s[pos] == '1' && s[pos + 1] == '1' && s[pos + 2] == '0' && s[pos + 3] == '0';
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        int q;
        cin >> s >> q;

        int matching_c = 0;
        int n = s.size();

        for (int i = 0; i < n - 3; ++i)
            if (match_str(s, i))
                matching_c++;

        while (q--) {
            int ind;
            char v;
            cin >> ind >> v;
            ind--;

            for (int i = ind - 3; i <= ind; ++i) {
                if (match_str(s, i))
                    matching_c--;
            }
            s[ind] = v;
            for (int i = ind - 3; i <= ind; ++i) {
                if (match_str(s, i))
                    matching_c++;
            }

            cout << (matching_c ? "YES\n" : "NO\n");
        }


    }
}


/*
4
100
4
1 1
2 0
2 0
3 1
1100000
3
6 1
7 1
4 1
111010
4
1 1
5 0
4 1
5 0
0100
4
3 1
1 1
2 0
2 1
 
*/

/*
NO
NO
NO
NO
YES
YES
NO
NO
YES
YES
YES
NO
NO
NO
NO

*/