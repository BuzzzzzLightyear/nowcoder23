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
     * @param pRoot TreeNode类
     * @return TreeNode类
     */
    TreeNode* Mirror(TreeNode* pRoot) {
        // write code here

        myFunc(pRoot);

        return pRoot;
    }

    void myFunc(TreeNode* root) {
        if(root) {
            if(root->left || root->right) {
                TreeNode* ptrTemp = root->left;
                root->left = root->right;
                root->right = ptrTemp;

                if(root->left)  myFunc(root->left);
                if(root->right) myFunc(root->right);
            }
        }
    }
};
#endif //BM_TOTAL_SOLUTION_H
