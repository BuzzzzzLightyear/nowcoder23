//
// Created by 刘健 on 2023/2/22.
//

#ifndef BM_TOTAL_SOLUTION_H
#define BM_TOTAL_SOLUTION_H
#include <queue>
#include <vector>
class Solution {
public:
    struct cmp {
        bool operator()(int a, int b) {
            return a > b;
        }
    };
    void Insert(int num) {
        int l_top = big_q.empty() ? 0 : big_q.top();
        int r_top = small_q.empty() ? 0 : small_q.top();
        if (num < l_top) {
            big_q.push(num);
            while (big_q.size() > small_q.size() + 1) {
                int tmp = big_q.top();
                big_q.pop();
                small_q.push(tmp);
            }
        } else if (num > r_top) {
            small_q.push(num);
            while (small_q.size() > big_q.size() + 1) {
                int tmp = small_q.top();
                small_q.pop();
                big_q.push(tmp);
            }
        } else {
            if (big_q.size() > small_q.size()) {
                small_q.push(num);
            } else {
                big_q.push(num);
            }
        }
    };
    double GetMedian() {
        double res;
        if (big_q.size() > small_q.size()) return big_q.top();
        else if (small_q.size() > big_q.size()) return small_q.top();
        else return (double )(big_q.top() + small_q.top()) / 2.0;
    }
    std::priority_queue<int, std::vector<int>> big_q;
    std::priority_queue<int, std::vector<int>, cmp> small_q;
};
#endif //BM_TOTAL_SOLUTION_H
