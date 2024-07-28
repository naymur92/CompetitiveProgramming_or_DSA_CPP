/*
https://codeforces.com/contest/1996/problem/C
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--)
    {
        int n, x;
        cin >> n >> x;

        int triples = 0;

        for (int a = 1; a <= min(n, x); ++a) {
            for (int b = 1; b <= min(n/a, x - a); ++b) {
                int maxC = min(x - (a + b), (n - a*b) / (a + b));
                triples += maxC;
            }
        }
        cout << triples << "\n";
    }
}


/*
4
7 4
10 5
7 1000
900000 400000

*/

/*
4
10
7
1768016938

*/