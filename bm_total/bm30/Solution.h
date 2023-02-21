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
};*/
class Solution {
public:
    TreeNode* preNode;//preNode一定是全局变量。
    TreeNode* Convert(TreeNode* pRootOfTree) {
        if (!pRootOfTree) return pRootOfTree;
        TreeNode* p = pRootOfTree;
        while (p->left) p = p->left;//找到双向链表的开头。
        inorder(pRootOfTree);
        return p;
    }

    void inorder(TreeNode* root){
        if (!root) return;
        inorder(root->left);
        //当前结点中需要进校的调整。
        root->left = preNode;
        if (preNode){
            preNode->right = root;
        }
        preNode = root;//更新preNode，指向当前结点，作为下一个结点的前继。

        inorder(root->right);
    }
};
#endif //BM_TOTAL_SOLUTION_H
