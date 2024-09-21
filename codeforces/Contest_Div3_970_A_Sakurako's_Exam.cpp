/*
https://codeforces.com/contest/2008/problem/A
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int a, b;
        cin >> a >> b;

        if (a % 2 != 0) cout << "NO\n";
        else if (a == 0 && b % 2 != 0) cout << "NO\n";
        else cout << "YES\n";
    }
}


/*
5
0 1
0 3
2 0
2 3
3 1

*/

/*
NO
NO
YES
YES
NO

*/