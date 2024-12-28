/*
https://leetcode.com/problems/maximum-level-sum-of-a-binary-tree/description/?envType=study-plan-v2&envId=leetcode-75
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
    int maxLevelSum(TreeNode* root) {
        int level = 0, max_sum_level = 0;
        int max_sum = -1e5, level_sum, n;

        queue<TreeNode*> Q;
        Q.push(root);

        while (!Q.empty()) {
            n = Q.size();
            level_sum = 0;
            level++;
            while (n--) {
                TreeNode* current = Q.front();
                level_sum += current->val;

                Q.pop();

                if (current->left)
                    Q.push(current->left);
                if (current->right)
                    Q.push(current->right);
            }
            if (level_sum > max_sum) {
                max_sum = level_sum;
                max_sum_level = level;
            }
        }

        return max_sum_level;
    }
};


int main() {

}