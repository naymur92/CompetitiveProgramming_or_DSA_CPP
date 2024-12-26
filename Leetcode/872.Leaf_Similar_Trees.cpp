/*
https://leetcode.com/problems/leaf-similar-trees/description/?envType=study-plan-v2&envId=leetcode-75
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
    void getLeafValues(TreeNode* root, vector<int> &leafValues) {
        if (root == nullptr) return;

        if (root->left == nullptr && root->right == nullptr) {
            leafValues.push_back(root->val);
            return;
        }
        getLeafValues(root->left, leafValues);
        getLeafValues(root->right, leafValues);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> leafValues1, leafValues2;
        getLeafValues(root1, leafValues1);
        getLeafValues(root2, leafValues2);

        return leafValues1 == leafValues2;
    }
};

int main() {
	
}