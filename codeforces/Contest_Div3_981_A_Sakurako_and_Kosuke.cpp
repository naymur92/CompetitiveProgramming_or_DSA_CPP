/*
https://codeforces.com/contest/2033/problem/A
*/

#include <bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--)
    {
        int n;
        cin >> n;

        if (n % 2 == 0)
            cout << "Sakurako\n";
        else
            cout << "Kosuke\n";
    }
}


/*
4
1
6
3
98

*/

/*
Kosuke
Sakurako
Kosuke
Sakurako


*/