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
 *	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 * };
 */
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param root TreeNode类
     * @return bool布尔型
     */
    bool isValidBST(TreeNode* root) {
        // 时间复杂度O(N)，空间复杂度O(N)
        if (root == nullptr) return true;
        if (!isValidBST(root->left) || root->val < pre) return false;
        pre = root->val;
        return isValidBST(root->right);
    }
    int pre = INT_MIN;
};
#endif //BM_TOTAL_SOLUTION_H
