/*
https://leetcode.com/problems/group-anagrams/description/
*/

#include <bits/stdc++.h>

using namespace std;

vector<vector<string>> groupAnagrams(vector<string>& strs) {
    /*unordered_map<string, vector<int>> mp;

    int n = strs.size();

    for (int i = 0; i < n; ++i) {
        string s = strs[i];
        sort(s.begin(), s.end());

        if (mp.find(s) != mp.end()) {
            auto indxs = mp[s];
            indxs.push_back(i);
            mp[s] = indxs;
        } else {
            mp[s] = {i};
        }
    }

    vector<vector<string>> ans;
    for (auto it: mp) {
        vector<string> tmp;
        for (auto i: it.second)
            tmp.push_back(strs[i]);

        ans.push_back(tmp);
    }

    return ans;*/

    // another solution
    unordered_map<string, vector<string>> mp;
    for (string s: strs) {
        string t = s;
        sort(t.begin(), t.end());
        mp[t].push_back(s);
    }

    vector<vector<string>> anagrams;
    for (auto it: mp) {
        anagrams.push_back(it.second);
    }

    return anagrams;
}

void solve() {
    vector<string> strs = {"eat","tea","tan","ate","nat","bat"};

    vector<vector<string>> ans = groupAnagrams(strs);

    for (int i = 0; i < ans.size(); ++i) {
        for (string &s: ans[i]) cout << s << " ";
        cout << "\n";
    }
    cout << "\n";
}

int main() {
    solve();
}