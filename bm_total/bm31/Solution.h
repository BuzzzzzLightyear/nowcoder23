//
// Created by 刘健 on 2023/2/19.
//

#ifndef BM_TOTAL_SOLUTION_H
#define BM_TOTAL_SOLUTION_H

/*
struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
    TreeNode(int x) :
            val(x), left(NULL), right(NULL) {
    }
};
*/
// 左子树前中后遍历；右子树后中前遍历；同时对比遍历到的节点
class Solution {
public:
    bool isSymmetrical(TreeNode* pRoot) {
        if (pRoot == nullptr)
            return true;

        return traverse(pRoot->left, pRoot->right);
    }

    bool traverse(TreeNode* node1, TreeNode* node2) {
        if (node1 == nullptr || node2 == nullptr)
            return node1 == node2;

        return traverse(node1->left, node2->right)
        && (node1->val == node2->val)
        && traverse(node1->right, node2->left);
    }

};
#endif //BM_TOTAL_SOLUTION_H
