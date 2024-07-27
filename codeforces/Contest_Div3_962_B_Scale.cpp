/*
https://codeforces.com/contest/1996/problem/B
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n, k;
        cin >> n >> k;
        string a[n];
        for (int i = 0; i < n; ++i)
        {
            cin >> a[i];
        }

        // int split = n / k;
        for (int i = 0; i < n; i += k)
        {
            for (int j = 0; j < n; j += k)
            {
                cout << a[i][j];
            }
            cout << "\n";
        }
    }
}


/*
4
4 4
0000
0000
0000
0000
6 3
000111
000111
000111
111000
111000
111000
6 2
001100
001100
111111
111111
110000
110000
8 1
11111111
11111111
11111111
11111111
11111111
11111111
11111111
11111111
*/

/*
0
01
10
010
111
100
11111111
11111111
11111111
11111111
11111111
11111111
11111111
11111111
*/