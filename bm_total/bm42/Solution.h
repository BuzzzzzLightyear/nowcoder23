//
// Created by 刘健 on 2023/2/22.
//

#ifndef BM_TOTAL_SOLUTION_H
#define BM_TOTAL_SOLUTION_H
#include <stack>
class Solution {
public:
    void push(int node) {
        stack1.push(node);
    }

    int pop() {
        int n;
        if (stack2.empty()) {
            while (stack1.empty() == false) {
                stack2.push(stack1.top());
                stack1.pop();
            }
        }
        n = stack2.top();
        stack2.pop();
        return n;
    }

private:
    std::stack<int> stack1;
    std::stack<int> stack2;
};
#endif //BM_TOTAL_SOLUTION_H
