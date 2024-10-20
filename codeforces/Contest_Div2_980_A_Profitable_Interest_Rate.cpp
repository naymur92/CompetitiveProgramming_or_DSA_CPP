/*
https://codeforces.com/contest/2024/problem/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int a, b;
        cin >> a >> b;

        int maxi = 0;

        if (a >= b)
            maxi = a;
        else if (b - a * 2 < 0) {
            // int non_p = 1;
            // while ((a - non_p) < (b - non_p * 2) && non_p <= a)
            //     non_p++;

            // maxi = a - non_p;

            maxi = a - (b - a);
        }

        cout << maxi << "\n";

        /*time limit exeeded*/
    }
}


/*
5
10 5
7 9
5 100
1 1
1 2

*/

/*
10
5
0
1
0

*/