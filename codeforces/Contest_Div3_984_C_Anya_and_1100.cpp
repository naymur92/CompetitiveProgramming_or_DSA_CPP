/*
https://codeforces.com/contest/2036/problem/C
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        int q;
        cin >> s >> q;

        int s_size = s.size();

        int str_f = s.find("1100");

        while (q--) {
            int ind;
            char v;
            cin >> ind >> v;
            ind--;

            if (s_size < 4)
                cout << "NO\n";
            else {
                s[ind] = v;
                if (str_f != -1 && (ind < str_f || ind > str_f + 3))
                    cout << "YES\n";
                else {
                    str_f = s.find("1100");
                    if (str_f != -1)
                        cout << "YES\n";
                    else
                        cout << "NO\n";
                }
            }
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