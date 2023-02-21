//
// Created by 刘健 on 2023/2/19.
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
     * @return int整型vector<vector<>>
     */
    void add(TreeNode* root, vector<vector<int>>& res, int h) {
        if (h >= res.size()) {
            std::vector<int> a;
            a.push_back(root->val);
            res.push_back(a);
        } else {
            res[h].push_back(root->val);
        }
        if (root->left != nullptr) {
            add(root->left, res, h+1);
        }
        if (root->right != nullptr) {
            add(root->right, res, h+1);
        }
        return ;
    }

    vector<vector<int> > levelOrder(TreeNode* root) {
        // write code here
        std::vector<std::vector<int>> res;
        if (root == nullptr) return res;
        add(root, res, 0);
        return res;
    }
};
#endif //BM_TOTAL_SOLUTION_H
