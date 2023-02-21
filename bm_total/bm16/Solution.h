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
        ListNode* res = new ListNode(-1);
        ListNode* pre = res;
        pre->next = p;
        bool need_delete = false;
        while (p->next != nullptr) {
            if (p->val == p->next->val) {
                need_delete = true;
                ListNode* tmp = p->next;
                p->next = tmp->next;
                delete tmp;
            } else if (need_delete) {
                need_delete = false;
                p = p->next;
                ListNode* tmp = pre->next;
                pre->next = p;
                delete tmp;
            } else {
                p = p->next;
                pre = pre->next;
            }
        }
        if (need_delete) {
            pre->next = nullptr;
            delete p;
        }
        return res->next;
    }
};
#endif //BM_TOTAL_SOLUTION_H
