/*
https://leetcode.com/problems/valid-palindrome-ii/description/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(string &s, int l, int r) {
        while (l < r) {
            if (s.at(l) == s.at(r)) l++, r--;
            else return false;
        }

        return true;
    }
    bool validPalindrome(string s) {
        int l = 0, r = s.size() - 1, n = s.size();

        while (l < r) {
            if (s[l] == s[r]) {
                l++, r--;
                continue;
            }

            return isPalindrome(s, l + 1, r) || isPalindrome(s, l, r - 1);
        }

        return true;
    }
};

void solve() {
    Solution obj;
    // 
}

int main() {
    solve();
}