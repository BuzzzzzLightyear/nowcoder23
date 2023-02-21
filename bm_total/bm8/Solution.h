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
     * @param pHead ListNode类
     * @param k int整型
     * @return ListNode类
     */
    ListNode* FindKthToTail(ListNode* pHead, int k) {
        // write code here
        ListNode* temp = pHead;
        int i = 0;
        while (pHead) {
            pHead = pHead->next;
            if (++i > k) {
                temp = temp->next;
            }
        }
        return i >= k ? temp : NULL;
    }
};

#endif //BM_TOTAL_SOLUTION_H
