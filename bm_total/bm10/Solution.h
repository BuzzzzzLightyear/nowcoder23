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
    ListNode* FindFirstCommonNode( ListNode* pHead1, ListNode* pHead2) {
        if (pHead1 == NULL || pHead2 == NULL) return NULL;
        ListNode* p1 = pHead1;
        ListNode* p2 = pHead2;
        bool f1 = false, f2 = false;
        while (p1 != p2) {
            if (p1->next) {
                p1 = p1->next;
            } else if (!f1) {
                p1 = pHead2;
                f1 = true;
            } else {
                break;
            }

            if (p2->next) {
                p2 = p2->next;
            } else if (!f2) {
                p2 = pHead1;
                f2 = true;
            } else {
                break;
            }
        }
        return p1 == p2 ? p1 : NULL;
    }
};

#endif //BM_TOTAL_SOLUTION_H
