/*
https://leetcode.com/problems/backspace-string-compare/description/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    void getEvaluatedString(string &s) {
        int l = 0;
        for (int r = 0; r < s.size(); ++r) {
            if (l < 0) l = 0;
            if (s[r] != '#') s[l++] = s[r];
            else l--;
        }
        s = s.substr(0, l);
    }
    bool backspaceCompare(string s, string t) {
        getEvaluatedString(s);
        getEvaluatedString(t);

        return s == t;
    }
};

void solve() {
    Solution obj;
    // 
}

int main() {
    solve();
}