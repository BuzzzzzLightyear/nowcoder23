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
    ListNode* ReverseList(ListNode* pHead) {
        ListNode* pre = nullptr;
        ListNode* cur = pHead;
        ListNode* next = nullptr;
        while (cur != nullptr) {
            next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }
        return pre;
    }

    /**
     *
     * @param head ListNode类 the head
     * @return bool布尔型
     */
    bool isPail(ListNode* head) {
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

        ListNode* p2 = ReverseList(mid);
        while (p2) {
            if (p2->val != head->val) {
                return false;
            }
            p2 = p2->next;
            head = head->next;
        }
        return true;
    }
};

#endif //BM_TOTAL_SOLUTION_H
