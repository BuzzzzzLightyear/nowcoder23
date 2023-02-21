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
    /**
     *
     * @param root TreeNode类
     * @return int整型
     */
    int maxDepth(TreeNode* root) {
        // write code here
        if (!root)   return 0;

        return max(maxDepth(root->left), maxDepth(root->right)) + 1;
    }
};
#endif //BM_TOTAL_SOLUTION_H
