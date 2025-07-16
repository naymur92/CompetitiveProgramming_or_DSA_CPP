/*
https://codeforces.com/contest/2123/problem/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        if (n % 4 == 0) cout << "Bob\n";
        else cout << "Alice\n";
    }
}


/*
5
2
4
5
7
100

*/

/*
Alice
Bob
Alice
Alice
Bob

*/