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
     * @param head1 ListNode类
     * @param head2 ListNode类
     * @return ListNode类
     */
    ListNode* addInListV2(ListNode* head1, ListNode* head2) {
        int carry = 0;
        ListNode* res = new ListNode(-1);
        ListNode* cur = res;
        int val1, val2, sum;
        while (head1 || head2 || carry) {
            if (head1) {
                val1 = head1->val;
                head1 = head1->next;
            } else {
                val1 = 0;
            }
            if (head2) {
                val2 = head2->val;
                head2 = head2->next;
            } else {
                val2 = 0;
            }

            sum = val1 + val2 + carry;
            carry = sum / 10;

            ListNode* temp = new ListNode(sum % 10);
            cur->next = temp;
            cur = temp;
        }

        return res->next;
    }

    ListNode* addInList(ListNode* head1, ListNode* head2) {
        // write code here
        return ReverseList(addInListV2(ReverseList(head1), ReverseList(head2)));
    }
};
#endif //BM_TOTAL_SOLUTION_H
