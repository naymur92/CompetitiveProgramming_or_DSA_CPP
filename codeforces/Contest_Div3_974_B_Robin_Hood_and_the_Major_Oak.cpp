/*
https://codeforces.com/contest/2014/problem/B
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

        int first = n - k + 1;
        if (first % 2 == 0) first++;
        int odd_count = 0;
        for (int i = first; i <= n; i += 2) {
            odd_count++;
        }

        cout << (odd_count % 2 == 0 ? "YES\n" : "NO\n");
    }
}


/*
5
1 1
2 1
2 2
3 2
4 4

*/

/*
NO
YES
NO
NO
YES

*/