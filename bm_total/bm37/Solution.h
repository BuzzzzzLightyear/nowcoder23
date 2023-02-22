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
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param root TreeNode类
     * @param p int整型
     * @param q int整型
     * @return int整型
     */
    int lowestCommonAncestor(TreeNode* root, int p, int q) {
        // write code here
        if(p < root -> val && q < root -> val) // p和q都在root的左子树
        {
            return lowestCommonAncestor(root -> left, p, q);
        }
        else if(p > root -> val && q > root -> val) //p和q都在root的右子树
        {
            return lowestCommonAncestor(root -> right, p, q);
        }
        else
            return root -> val;
    }
};
#endif //BM_TOTAL_SOLUTION_H
