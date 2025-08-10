/*
https://leetcode.com/problems/minimum-number-of-swaps-to-make-the-string-balanced/description/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int minSwaps(string s) {
        // two pointer solution
        /*int op = 0;
        int i = 0, j = s.size() - 1;

        int swp = 0;
        while (i < j) {
            if (s[i] == '[') op++;
            else {
                if (!op) {
                    while (s[j] == ']') j--;

                    swp++;
                    op++;
                } else op--;
            }
            i++;
        }

        return swp;*/

        // another solution
        int size = 0;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '[') size++;
            else if (size > 0) size--;
        }

        return (size + 1) / 2;

        // stack solution
        /*stack<char> st;
        for (int i = 0; i < s.size(); ++i) {
            if (s[i] == '[') st.push(s[i]);
            else if (!st.empty()) st.pop();
        }

        return (st.size() + 1) / 2;*/
    }
};

void solve() {
    Solution obj;
    cout << obj.minSwaps("]]][[[");
}

int main() {
    solve();
}