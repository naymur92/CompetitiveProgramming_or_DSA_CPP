/*
https://leetcode.com/problems/longest-zigzag-path-in-a-binary-tree/description/?envType=study-plan-v2&envId=leetcode-75
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
    int max_h = 0;
    int longestZigZag(TreeNode* root) {
        if (root == nullptr) return max_h;

        zigZag(root, true, 0);
        zigZag(root, false, 0);

        return max_h;
    }

    void zigZag(TreeNode* node, bool isLeft, int currLen) {
        if (node == nullptr) return;

        max_h = max(max_h, currLen);
        zigZag(node->left, true, isLeft ? 1 : currLen + 1);
        zigZag(node->right, false, isLeft ? currLen + 1 : 1);
    }
};

int main() {
	
}