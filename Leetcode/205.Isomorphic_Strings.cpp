/*
https://leetcode.com/problems/isomorphic-strings/description/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n = s.size();
        /*unordered_map<char, char> mp, mp1;

        for (int i = 0; i < n; ++i) {
            if (mp.count(s[i])) {
                char alt = mp[s[i]];
                if (alt != t[i] || (mp.count(alt) && mp[alt] != s[i])) return false;

                mp[alt] = s[i];
            } else {
                mp[s[i]] = t[i];

                if (mp1.count(t[i]) && mp1[t[i]] != s[i]) return false;
                else mp1[t[i]] = s[i];
            }
        }*/

        unordered_map<char, int> mp_s, mp_t;
        for (int i = 0; i < n; ++i) {
            if (mp_s[s[i]] != mp_t[t[i]]) return false;

            mp_s[s[i]] = i + 1;
            mp_t[t[i]] = i + 1;
        }

        return true;
    }
};

void solve() {
    Solution obj;
    cout << obj.isIsomorphic("egg", "add");
}

int main() {
    solve();
}