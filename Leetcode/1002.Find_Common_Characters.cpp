/*
https://leetcode.com/problems/find-common-characters/description/
*/

#include <bits/stdc++.h>

using namespace std;

vector<string> commonChars(vector<string>& words) {
    int n = words.size();

    vector<string> ans;
    /*vector<vector<int> > pre(n, vector<int>(26, 0));

    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < words[i].size(); ++j) {
            pre[i][words[i][j] - 'a']++;
        }
    }

    for (int i = 0; i < 26; ++i) {
        bool isFound = true;
        int rep = INT_MAX;
        for (int j = 0; j < n; ++j) {
            if (pre[j][i] == 0) {
                isFound = false;
                break;
            } else {
                rep = min(pre[j][i], rep);
            }
        }

        if (isFound) {
            while (rep--) ans.push_back(string(1, 'a' + i));
        }
    }*/

    // another solution
    sort(words.begin(), words.end());
    for (char &c: words[0]) {
        bool isFound = true;

        for (int i = 1; i < n; ++i) {
            auto pos = words[i].find(c);
            if (pos == string::npos) {
                isFound = false;
                break;
            } else {
                words[i][pos] = '.';
            }
        }

        if (isFound)
            ans.push_back(string(1, c));
    }

    return ans;
}

void solve() {
    vector<string> words = {"bella","label","roller"};

    vector<string> ans = commonChars(words);

    for (int i = 0; i < ans.size(); ++i) {
        cout << ans[i] << " ";
    }
    cout << "\n";
}

int main() {
    solve();
}