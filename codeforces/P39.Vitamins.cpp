/*
https://codeforces.com/group/yg7WhsFsAp/contest/355494/problem/P39
*/
#include <bits/stdc++.h>

using namespace std;

void solve() {
	int n;
    cin >> n;

    map<string, int> mp;

    for (int i = 0; i < n; ++i) {
        int c;
        string s;

        cin >> c >> s;
        sort(s.begin(), s.end());

        if (mp.count(s)) mp[s] = min(mp[s], c);
        else mp[s] = c;
    }
    int ans = INT_MAX;

    if (mp["ABC"]) ans = mp["ABC"];
    if (mp["AB"] && mp["C"]) ans = min(ans, mp["AB"] + mp["C"]);
    if (mp["AB"] && mp["AC"]) ans = min(ans, mp["AB"] + mp["AC"]);
    if (mp["AB"] && mp["BC"]) ans = min(ans, mp["AB"] + mp["BC"]);
    if (mp["A"] && mp["BC"]) ans = min(ans, mp["A"] + mp["BC"]);
    if (mp["AC"] && mp["BC"]) ans = min(ans, mp["AC"] + mp["BC"]);
    if (mp["AC"] && mp["B"]) ans = min(ans, mp["AC"] + mp["B"]);
    if (mp["A"] && mp["B"] && mp["C"]) ans = min(ans, mp["A"] + mp["B"] + mp["C"]);

    cout << (ans == INT_MAX ? -1 : ans) << "\n";
}

int main() {
	solve();
}

/*
4
5 C
6 B
16 BAC
4 A

15
//////////////
6
100 A
355 BCA
150 BC
160 AC
180 B
190 CA


250

*/