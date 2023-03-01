//
// Created by 刘健 on 2023/2/22.
//

#ifndef BM_TOTAL_SOLUTION_H
#define BM_TOTAL_SOLUTION_H
#include <vector>
using namespace std;
class Solution {
public:
    /**
     *
     * @param prices int整型vector
     * @return int整型
     */
    int maxProfit(vector<int>& prices) {
        // write code here
        int cur = INT_MAX;
        int res = 0;
        for (int i = 0; i < prices.size(); ++i) {
            if (cur > prices[i]) {
                cur = prices[i];
            } else {
                res = max(res, prices[i] - cur);
            }
        }
        return res;
    }
};
#endif //BM_TOTAL_SOLUTION_H
