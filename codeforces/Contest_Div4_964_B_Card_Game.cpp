/*
https://codeforces.com/contest/1999/problem/B
*/

#include <bits/stdc++.h>

using namespace std;

int main(){
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


        int a_wins = 0, b_wins = 0;

        for (int i = 0; i < 2; ++i) {
            for (int j = 0; j < 2; ++j) {
                if (suneet_cards[i] > slavic_cards[j]) a_wins++;
                else b_wins++;
            }
        }

        if (a_wins - b_wins > 0) cout << a_wins - b_wins << "\n";
        else cout << 0 << "\n";
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