/*
https://leetcode.com/problems/make-the-string-great/description/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    string makeGood(string s) {
        stack<char> st;
        for (int i = 0; i < s.size(); ++i) {
            if (st.empty()) st.push(s[i]);
            else {
                if (st.top() + 32 == s[i] || s[i] + 32 == st.top()) st.pop();
                else st.push(s[i]);
            }
        }

        string ans = "";
        while (!st.empty()) {
            ans = st.top() + ans;
            st.pop();
        }
        return ans;
    }
};

void solve() {
    Solution obj;
    cout << obj.makeGood("leEeetcode");
}

int main() {
    solve();
}