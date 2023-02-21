//
// Created by 刘健 on 2023/2/19.
//

#ifndef BM_TOTAL_SOLUTION_H
#define BM_TOTAL_SOLUTION_H
#include <deque>
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
     * @return bool布尔型
     */
    bool isCompleteTree(TreeNode* root) {
        // write code here
        if (root == nullptr) return true;
        std::deque<TreeNode*> dq;
        dq.push_back(root);
        bool flag = false;
        while (!dq.empty()) {
            size_t sz = dq.size();
            for (size_t i = 0; i < sz; ++i) {
                TreeNode* cur = dq.front();
                dq.pop_front();
                if (cur) {
                    if (flag) return false;
                    dq.push_back(cur->left);
                    dq.push_back(cur->right);
                } else {
                    flag = true;
                }
            }
        }
        return true;
    }
};
#endif //BM_TOTAL_SOLUTION_H
