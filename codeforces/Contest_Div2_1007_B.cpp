/*
https://codeforces.com/contest/2071/problem/B
*/

#include <bits/stdc++.h>

using namespace std;

bool checkSquare(long long num) {
    long long sq = sqrt(num);
    return sq * sq == num;
}

void solve() {
    int n;
    cin >> n;

    long long sum = 1LL * n * (n + 1) / 2;
    
    if (checkSquare(sum)) {
        cout << -1 << "\n";
        return;
    }

    int temp = -1;
    sum = 0;
    for (int i = 1; i <= n; ++i) {
        if (temp == -1) {
            if (checkSquare(sum + i)) {
                temp = i;
            } else {
                cout << i << " ";
            }            
        } else {
            cout << i << " " << temp << " ";
            temp = -1;
        }
        sum += i;
    }
    cout << "\n";
}

int main() {
    int t;
    cin >> t;
    while(t--) {
        solve();
    }
}


/*
3
1
4
5

*/

/*
-1
2 4 1 3
5 1 4 3 2
*/