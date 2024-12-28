/*
https://leetcode.com/problems/binary-tree-right-side-view/description/?envType=study-plan-v2&envId=leetcode-75
*/

#include <bits/stdc++.h>

using namespace std;


/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    vector<int> rightSideView(TreeNode* root) {
        vector<int> rightSideValues;
        queue<TreeNode*> q;

        if (!root)
            return rightSideValues;

        q.push(root);
        
        while (!q.empty()) {
            int n = q.size();
            for (int i = 0; i < n; ++i) {
                TreeNode* current = q.front();
                q.pop();

                if (i == n - 1)
                    rightSideValues.push_back(current->val);

                if (current->left)
                    q.push(current->left);

                if (current->right)
                    q.push(current->right);
            }
        }

        return rightSideValues;
    }
};


int main() {

}