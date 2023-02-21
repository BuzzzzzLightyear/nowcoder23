//
// Created by 刘健 on 2023/2/19.
//

#ifndef BM_TOTAL_SOLUTION_H
#define BM_TOTAL_SOLUTION_H

#include <vector>
#include <deque>

struct TreeNode {
    int val;
    struct TreeNode *left;
    struct TreeNode *right;
};
using namespace std;

class Solution {
public:
    /**
     *
     * @param root TreeNode类
     * @return int整型vector<vector<>>
     */
    void add(TreeNode* root, vector<deque<int>>& res, int h) {
        if (h >= res.size()) {
            deque<int> a;
            a.push_back(root->val);
            res.push_back(a);
        } else {
            if (h % 2 == 0)
                res[h].push_back(root->val);
            else
                res[h].push_front(root->val);
        }
        if (root->left != nullptr) {
            add(root->left, res, h+1);
        }
        if (root->right != nullptr) {
            add(root->right, res, h+1);
        }
        return ;
    }

    vector<deque<int> > levelOrder(TreeNode* root) {
        vector<deque<int>> res;
        if (root == nullptr) return res;
        add(root, res, 0);
        return res;
    }
    vector<vector<int> > Print(TreeNode* pRoot) {
        vector<deque<int>> res0 = levelOrder(pRoot);
        vector<vector<int>> res;
        for (size_t i = 0; i < res0.size(); ++i) {
            vector<int> temp(res0[i].begin(), res0[i].end());
            res.push_back(temp);
        }
        return res;
    }
};
#endif //BM_TOTAL_SOLUTION_H
