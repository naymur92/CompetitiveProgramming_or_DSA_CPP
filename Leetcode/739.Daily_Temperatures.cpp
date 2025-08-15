/*
https://leetcode.com/problems/daily-temperatures/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        int n = temperatures.size();

        stack<int> indx;
        indx.push(n - 1);

        vector<int> ans(n);
        ans[n - 1] = 0;
        for (int i = n - 2; i >= 0; --i) {
            while (!indx.empty() && temperatures[i] >= temperatures[indx.top()]) indx.pop();
            ans[i] = indx.empty() ? 0 : indx.top() - i;
            indx.push(i);
        }
        return ans;
    }
};

int main() {
	Solution obj;
    vector<int> temperatures = {89,62,70,58,47,47,46,76,100,70};
    vector<int> ans = obj.dailyTemperatures(temperatures);

    for (auto num: ans) {
        cout << num << " ";
    }
    cout << "\n";
}