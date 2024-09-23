/*
https://codeforces.com/contest/2014/problem/0
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

        int count = 0, total_gold = 0;
        for (int i = 0; i < n; ++i) {
            int g;
            cin >> g;
            if (g >= k) total_gold += g;

            if (g == 0 && total_gold > 0) {
                total_gold--;
                count++;
            }
        }
        cout << count << "\n";
    }
}


/*
4
2 2
2 0
3 2
3 0 0
6 2
0 3 0 0 0 0
2 5
5 4

*/

/*
1
2
3
0

*/