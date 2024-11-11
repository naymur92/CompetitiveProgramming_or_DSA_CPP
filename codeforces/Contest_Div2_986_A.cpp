/*
https://codeforces.com/contest/2028/problem/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n, a, b;
        string s;

        cin >> n >> a >> b >> s;

        int x = 0, y = 0;

        bool reach = false;
        for (int i = 0; i < 10000; ++i) {
            if (s[i%n] == 'N')
                y += 1;
            else if (s[i%n] == 'E')
                x += 1;
            else if (s[i%n] == 'S')
                y -= 1;
            else
                x -= 1;

            // cout << "x: " << x << ", y: " << y << "\n";

            if (x == a && y == b) {
                reach = true;
                break;
            }
        }

        cout << (reach ? "YES\n" : "NO\n");
    }
}


/*
6
2 2 2
NE
3 2 2
NNE
6 2 1
NNEESW
6 10 10
NNEESW
3 4 2
NEE
4 5 5
NEWS

*/

/*
YES
NO
YES
YES
YES
NO

*/