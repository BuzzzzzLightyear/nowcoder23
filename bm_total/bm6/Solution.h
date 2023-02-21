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
    bool hasCycle(ListNode *head) {
        if (head == nullptr || head->next == nullptr) return false;
        ListNode* fast = head->next;
        ListNode* slow = head->next->next;
        while (fast != slow && slow != nullptr && slow->next != nullptr) {
            fast = fast->next;
            slow = slow->next->next;
        }
        return fast == slow;
    }
};

#endif //BM_TOTAL_SOLUTION_H
