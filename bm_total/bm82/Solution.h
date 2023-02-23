//
// Created by 刘健 on 2023/2/22.
//

#ifndef BM_TOTAL_SOLUTION_H
#define BM_TOTAL_SOLUTION_H
#include <vector>
#include <algorithm>
using namespace std;
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     * 两次交易所能获得的最大收益
     * @param prices int整型vector 股票每一天的价格
     * @return int整型
     */
    int maxProfit(std::vector<int>& prices) {
        // write code here
        int n = prices.size();
        std::vector<std::vector<int>> dp(n, std::vector<int>(5, -10000));
        //第0天不持有状态
        dp[0][0] = 0;
        //第0天持有股票
        dp[0][1] = -prices[0];
        //状态转移
        for(int i = 1; i < n; i++){
            dp[i][0] = dp[i - 1][0];
            dp[i][1] = max(dp[i - 1][1], dp[i - 1][0] - prices[i]);
            dp[i][2] = max(dp[i - 1][2], dp[i - 1][1] + prices[i]);
            dp[i][3] = max(dp[i - 1][3], dp[i - 1][2] - prices[i]);
            dp[i][4] = max(dp[i - 1][4], dp[i - 1][3] + prices[i]);
        }
        //选取最大值，可以只操作一次
        return max(dp[n - 1][2],max(0, dp[n - 1][4]));
    }
}

#endif //BM_TOTAL_SOLUTION_H
