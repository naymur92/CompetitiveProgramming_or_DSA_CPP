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

        int a = 1, b = 1, c = 1;

        while((a*b + b*c + c*a) <= n && (a + b + c) <= x) {
            while((a*b + b*c + c*a) <= n && (a + b + c) <= x) {
                while((a*b + b*c + c*a) <= n && (a + b + c) <= x) {
                    // cout << a << b << c << endl;
                    triples++;
                    c++;
                }
                b++;
                c = 1;
            }
            a++;
            b = 1;
        }
        // cout << endl;
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