/*
https://leetcode.com/problems/string-to-integer-atoi/
*/

#include <bits/stdc++.h>

using namespace std;

int myAtoi(string s) {
    bool isNegative = false;
    int n = s.size();

    int i = 0;
    while ((s[i] == ' ' || s[i] == '-' || s[i] == '+') && i < n) {
        if (s[i] == '-') {
            isNegative = true;
            i++;
            break;
        }
        if (s[i] == '+') {
            isNegative = false;
            i++;
            break;
        }

        i++;
    }


    int maxLimit = INT_MAX / 10;
    int ans = 0;
    while (s[i] >= '0' && s[i] <= '9' && i < n) {
        int digit = s[i] - '0';
        if (ans > maxLimit || (ans == maxLimit && digit > 7)) {
            return isNegative ? INT_MIN : INT_MAX;
        }

        ans = (ans * 10) + digit;

        i++;
    }

    return isNegative ? -ans : ans;
}

void solve() {
    string s = "   -042";

    cout << myAtoi(s);
    cout << "\n";
}

int main() {
    solve();
}