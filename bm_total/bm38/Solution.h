//
// Created by 刘健 on 2023/2/22.
//

#ifndef BM_TOTAL_SOLUTION_H
#define BM_TOTAL_SOLUTION_H
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
class Solution {
public:
    /**
     *
     * @param root TreeNode类
     * @param o1 int整型
     * @param o2 int整型
     * @return int整型
     */
    int lowestCommonAncestor(TreeNode* root, int o1, int o2) {
        // write code here
        if (root == nullptr) return -1;
        if (root->val == o1) return o1;
        else if (root->val == o2) return o2;
        int l = lowestCommonAncestor(root->left, o1, o2);
        int r = lowestCommonAncestor(root->right, o1, o2);
        if (l != -1 && r != -1) {
            return root->val;
        }
        return l != -1 ? l : r;
    }
};
#endif //BM_TOTAL_SOLUTION_H
