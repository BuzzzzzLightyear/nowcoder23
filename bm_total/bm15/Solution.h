//
// Created by 刘健 on 2023/2/19.
//

#ifndef BM_TOTAL_SOLUTION_H
#define BM_TOTAL_SOLUTION_H

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
    val(x), next(NULL) {
    }
};

class Solution {
public:
    /**
     *
     * @param head ListNode类
     * @return ListNode类
     */
    ListNode* deleteDuplicates(ListNode* head) {
        if (head == nullptr) {
            return head;
        }
        ListNode* p = head;
        while (p->next != nullptr) {
            if (p->val == p->next->val) {
                ListNode* tmp = p->next;
                p->next = tmp->next;
                delete tmp;
            } else {
                p = p->next;
            }
        }
        return head;
    }
};
#endif //BM_TOTAL_SOLUTION_H
