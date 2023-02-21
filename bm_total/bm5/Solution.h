//
// Created by 刘健 on 2023/2/19.
//

#ifndef BM_TOTAL_SOLUTION_H
#define BM_TOTAL_SOLUTION_H

#include<queue>

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
    val(x), next(NULL) {
    }
};

class Solution {
public:
    struct cmp {
        bool operator()(ListNode* a, ListNode* b) {
            return a->val > b->val;
        }
    };
    ListNode *mergeKLists(std::vector<ListNode *> &lists) {
        std::priority_queue<ListNode*, std::vector<ListNode*>, cmp> pq;
        ListNode* head = new ListNode(-1);
        ListNode* cur = head;
        for (size_t i = 0; i < lists.size(); ++i) {
            if (lists[i]) pq.push(lists[i]);
        }
        while(!pq.empty()) {
            cur->next = pq.top();
            cur = cur->next;
            pq.pop();
            if (cur->next) {
                pq.push(cur->next);
            }
        }
        return head->next;
    }
};

#endif //BM_TOTAL_SOLUTION_H
