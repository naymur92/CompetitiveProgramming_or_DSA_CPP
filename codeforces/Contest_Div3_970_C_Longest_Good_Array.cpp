/*
https://codeforces.com/contest/2008/problem/C
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int l, r;
        cin >> l >> r;

        int inc = 1;
        int count = 0;

        for (int i = l; i <= r; i = (i + inc++)) count++;
        cout << count << "\n";
    }
}


/*
5
1 2
1 5
2 2
10 20
1 1000000000

*/

/*
2
3
1
5
44721

*/