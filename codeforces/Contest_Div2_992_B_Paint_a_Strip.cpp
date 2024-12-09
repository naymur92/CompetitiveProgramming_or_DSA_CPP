/*
https://codeforces.com/contest/2040/problem/B
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int steps = 1;
        int r = 1;

        while (r < n) {
            steps++;
            r = (r + 1) * 2;
        }

        cout << steps << "\n";
    }
}


/*

4
1
2
4
20

*/

/*

1
2
2
4

*/