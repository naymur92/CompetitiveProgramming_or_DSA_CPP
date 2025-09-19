/*
https://leetcode.com/problems/intersection-of-two-arrays/description/
*/

#include <bits/stdc++.h>

using namespace std;

class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        /*vector<int> ans;
        for (int i = 0; i < nums1.size(); ++i) {
            bool isFound = false;
            for (int j = 0; j < nums2.size(); ++j) {
                if (nums1[i] == nums2[j]) {
                    isFound = true;
                    nums2[j] = -1;
                }
            }
            if (isFound) ans.push_back(nums1[i]);
        }
        return ans;*/

        /*vector<int> ans;
        set<int> st;
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());
        int p1 = 0, p2 = 0, n1 = nums1.size(), n2 = nums2.size();
        while (p1 < n1 && p2 < n2) {
            if (nums1[p1] == nums2[p2]) {
                st.insert(nums1[p1]);
                p1++, p2++;
            } else if (nums1[p1] < nums2[p2]) p1++;
            else p2++;
        }

        for (int num: st) ans.push_back(num);
        return ans;*/

        vector<int> ans;
        unordered_map<int, int> mp;
        for (int num: nums1) mp[num] = 1;
        for (int num: nums2) {
            if (mp.find(num) != mp.end() && mp[num] == 1) {
                ans.push_back(num);
                mp[num] = 0;
            }
        }
        return ans;
    }
};

void solve() {
    Solution obj;
    // 
}

int main() {
    solve();
}