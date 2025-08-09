/*
https://leetcode.com/problems/basic-calculator-ii/description/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    int calculate(string s) {
        stack<int> st;
        int n = s.size();

        int tmp = 0;
        char op = '+';
        for (int i = 0; i < n; ++i) {
            if (isdigit(s[i])) tmp = tmp * 10 + (s[i] - '0');

            if (!isdigit(s[i]) && !isspace(s[i]) || i == n - 1) {
                if (op == '+') st.push(tmp);
                else if (op == '-') st.push(-tmp);
                else {
                    int num;
                    if (op == '*') num = st.top() * tmp;
                    else num = st.top() / tmp;

                    st.pop();
                    st.push(num);
                }

                op = s[i];
                tmp = 0;
            }
        }
        int res = 0;
        while (!st.empty()) {
            res += st.top();
            st.pop();
        }
        return res;
    }
};

void solve() {
    Solution obj;
    cout << obj.calculate(" 3+5 / 2 ");
}

int main() {
    solve();
}