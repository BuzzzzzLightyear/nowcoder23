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
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param head ListNode类
     * @return ListNode类
     */
    ListNode* oddEvenList(ListNode* head) {
        // write code here

        ListNode* cur0 = new ListNode(-1);
        ListNode* cur1 = new ListNode(-1);
        ListNode* res0 = cur0;
        ListNode* res1 = cur1;
        int i = 0;
        while (head) {
            ++i;
            if (i % 2 == 0) {
                cur0->next = head;
                cur0 = cur0->next;
            } else {
                cur1->next = head;
                cur1 = cur1->next;
            }
            head = head->next;
        }
        cur0->next = nullptr;
        cur1->next = res0->next;
        return res1->next;
    }
};

#endif //BM_TOTAL_SOLUTION_H
