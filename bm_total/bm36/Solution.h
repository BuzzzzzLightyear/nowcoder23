//
// Created by 刘健 on 2023/2/22.
//

#ifndef BM_TOTAL_SOLUTION_H
#define BM_TOTAL_SOLUTION_H
#include <algorithm>
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};

class Solution {
public:
    bool isBalanced;
    int GetDepth(TreeNode* root)
    {
        if (!isBalanced) return 0;
        if (root == nullptr) return 0;
        int l = GetDepth(root->left);
        int r = GetDepth(root->right);
        if (l > r + 1 || r > l + 1) {
            isBalanced = false;
            return 0;
        }
        return std::max(l, r) + 1;
    }

    bool IsBalanced_Solution(TreeNode* pRoot) {
        isBalanced = true;
        GetDepth(pRoot);
        return isBalanced;
    }
};
#endif //BM_TOTAL_SOLUTION_H
