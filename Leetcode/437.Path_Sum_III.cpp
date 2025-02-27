/*
https://leetcode.com/problems/path-sum-iii/description/?envType=study-plan-v2&envId=leetcode-75
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
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int ans = 0;
    int pathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) return ans;

        dfs(root, targetSum);
        pathSum(root->left, targetSum);
        pathSum(root->right, targetSum);

        return ans;
    }

    void dfs(TreeNode* node, long targetSum) {
        if (node == nullptr) return;

        if (targetSum == node->val) ans++;

        dfs(node->left, targetSum - node->val);
        dfs(node->right, targetSum - node->val);
    }
};

int main() {
	
}