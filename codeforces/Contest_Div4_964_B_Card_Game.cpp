/*
https://codeforces.com/contest/1999/problem/B
*/

#include <bits/stdc++.h>

using namespace std;

int check(int a, int b) {
    if (a > b) return 1;
    else if (a == b) return 0;
    else return -1;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int suneet_cards[2];
        int slavic_cards[2];
        
        for (int i = 0; i < 2; ++i) {
            cin >> suneet_cards[i];
        }
        for (int i = 0; i < 2; ++i) {
            cin >> slavic_cards[i];
        }


        int ans = 0;

        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                if (check(suneet_cards[i], slavic_cards[j]) + check(suneet_cards[1 - i], slavic_cards[1 - j]) > 0) ans++;
            }
        }

        cout << ans << "\n";
    }
}


/*
5
3 8 2 6
1 1 1 1
10 10 2 2
1 1 10 10
3 8 7 2


*/

/*
2
0
4
0
2


*/