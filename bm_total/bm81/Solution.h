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
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     * 计算最大收益
     * @param prices int整型vector 股票每一天的价格
     * @return int整型
     *
     * 题解：核心就是赚取每一次可能的gap
     */
    int maxProfit(vector<int>& prices) {
        // write code here
        int cur = INT_MAX;
        int res = 0, sum = 0;
        for (int i = 0; i < prices.size(); ++i) {
            if (cur < prices[i]) {
                res += prices[i] - cur;
                cur = prices[i];
            } else {
                cur = prices[i];
            }
        }
        return res;
    }
};
#endif //BM_TOTAL_SOLUTION_H
