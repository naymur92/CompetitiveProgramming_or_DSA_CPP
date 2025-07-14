/*
https://leetcode.com/problems/count-and-say/description/
*/

#include <bits/stdc++.h>

using namespace std;

string countAndSay(int n) {
    string result = "1";

    while (--n) {
        int sz = result.size();
        string tmp = "";
        int i = 0;
        while (i < sz) {
            int cnt = 0;
            char curr = result[i];

            while (result[i] == curr && i < sz) i++, cnt++;

            tmp.push_back(cnt + '0');
            tmp.push_back(curr);
        }

        result = tmp;
    }

    return result;
}

void solve() {
    cout << countAndSay(4);
    cout << "\n";
}

int main() {
    solve();
}