/*
https://leetcode.com/problems/count-good-nodes-in-binary-tree/description/?envType=study-plan-v2&envId=leetcode-75
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
    int goodNodes(TreeNode* root) {
        countGood(root, -1e4);

        return ans;
    }
    void countGood(TreeNode* node, int maxVal) {
        if (node == nullptr) return;

        if (node->val >= maxVal) {
            ans++;
            maxVal = node->val;
        }

        countGood(node->left, maxVal);
        countGood(node->right, maxVal);

        node->left = node->right = nullptr;
    }
};

int main() {
	
}