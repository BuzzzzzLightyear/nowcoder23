//
// Created by 刘健 on 2023/2/19.
//

#ifndef BM_TOTAL_SOLUTION_H
#define BM_TOTAL_SOLUTION_H
/**
 * struct TreeNode {
 *  int val;
 *  struct TreeNode *left;
 *  struct TreeNode *right;
 * };
 */

class Solution {
public:
    bool hasPathSum(TreeNode* root, int sum) {
        // write code here
        if (!root) return false;
        if (!root->left && !root->right) return root->val == sum;
        return hasPathSum(root->left, sum - root->val) ||
        hasPathSum(root->right, sum - root->val);

    }
};
#endif //BM_TOTAL_SOLUTION_H
