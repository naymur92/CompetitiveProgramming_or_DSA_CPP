/*
https://codeforces.com/contest/1984/problem/B
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        string s;
        cin >> s;
        if (s[s.size() - 1] == '9' || s[0] != '1')
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "YES" << endl;
        }
    }
    return 0;	
}


/*
11
1337
200
1393938
1434
98765432123456789
11111111111111111
420
1984
10
69
119

*/

/*
YES
NO
YES
YES
NO
YES
NO
YES
YES
NO
NO

*/