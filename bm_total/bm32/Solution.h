//
// Created by 刘健 on 2023/2/19.
//

#ifndef BM_TOTAL_SOLUTION_H
#define BM_TOTAL_SOLUTION_H
/**
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 * };
 */

/**
 * struct TreeNode {
 *	int val;
 *	struct TreeNode *left;
 *	struct TreeNode *right;
 * };
 */

class Solution {
public:
    /**
     *
     * @param t1 TreeNode类
     * @param t2 TreeNode类
     * @return TreeNode类
     */
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
        // 时间复杂度O(min(N,M))，空间复杂度O(min(N,M))
        if (t1 == nullptr) return t2;
        if (t2 == nullptr) return t1;
        t1->val += t2->val;
        t1->left = mergeTrees(t1->left, t2->left);
        t1->right = mergeTrees(t1->right, t2->right);
        return t1;
    }
};
#endif //BM_TOTAL_SOLUTION_H
