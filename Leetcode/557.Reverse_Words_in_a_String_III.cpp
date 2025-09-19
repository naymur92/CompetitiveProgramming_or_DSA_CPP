/*
https://leetcode.com/problems/reverse-words-in-a-string-iii/description/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string reverseWords(string s) {
        /*int n = s.size();
        int l = 0, r = 0;
        while (l < n && r < n) {
            while (l < n && s[l] == ' ') l++;
            r = l;
            while (r < n && s[r] != ' ') r++;

            if (r == l) {
                l++;
                continue;
            }

            int tmp_r = r - 1;
            while (l < tmp_r) {
                swap(s[l], s[tmp_r]);
                l++, tmp_r--;
            }
            l = r;
        }

        return s;*/

        int n = s.size();
        for (int l = 0, r = 0; l < n; ++l) {
            if (s[l] == ' ') continue;

            r = l;
            while (r < n && s[r] != ' ') r++;
            reverse(s.begin() + l, s.begin() + r);
            l = r - 1;
        }
        return s;
    }
};

void solve() {
    Solution obj;
    // 
}

int main() {
    solve();
}