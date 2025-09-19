/*
https://leetcode.com/problems/valid-palindrome/description/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        int l = 0, r = s.size() - 1;

        while (l < r) {
            if (isalnum(s.at(l)) && isalnum(s.at(r))) {
                if (tolower(s.at(l)) != tolower(s.at(r))) return false;
                l++, r--;
            } else {
                if (!isalnum(s.at(l))) l++;
                if (!isalnum(s.at(r))) r--;
            }
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