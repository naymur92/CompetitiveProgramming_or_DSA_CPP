/*
https://leetcode.com/problems/maximum-depth-of-binary-tree/description/?envType=study-plan-v2&envId=leetcode-75
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

int maxDepth(TreeNode* root) {
    if (root == nullptr) return 0;
	return max(maxDepth(root->left), maxDepth(root->right)) + 1;
}

int main() {
	
}