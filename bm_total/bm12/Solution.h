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
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2) {
        ListNode* pre = new ListNode(-1);
        ListNode* cur = pre;
        while (pHead1 != nullptr && pHead2 != nullptr) {
            if (pHead1->val < pHead2->val) {
                cur->next = pHead1;
                pHead1 = pHead1->next;
            } else {
                cur->next = pHead2;
                pHead2 = pHead2->next;
            }
            cur = cur->next;
        }
        cur->next = pHead1 ? pHead1 : pHead2;
        return pre->next;
    }
    /**
     *
     * @param head ListNode类 the head node
     * @return ListNode类
     */
    ListNode* sortInList(ListNode* head) {
        // write code here
        if (head == NULL || head->next == NULL) return head;
        ListNode* left = head;
        ListNode* mid = head->next;
        ListNode* right = head->next->next;
        while (right && right->next) {
            left = left->next;
            mid = mid->next;
            right = right->next->next;
        }
        left->next = NULL;
        return Merge(sortInList(head), sortInList(mid));
    }
};

#endif //BM_TOTAL_SOLUTION_H
