//
// Created by 刘健 on 2023/2/22.
//

#ifndef BM_TOTAL_SOLUTION_H
#define BM_TOTAL_SOLUTION_H
#include <vector>
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param nums int整型vector
     * @return int整型
     */
    int rob(std::vector<int>& nums) {
        int* dp = new int[1 + nums.size()];
        dp[0] = 0;
        dp[1] = nums[0];
        for (int i = 2; i < nums.size() + 1; ++i) {
            dp[i] = std::max(dp[i-1], dp[i-2] + nums[i-1]);
        }
        return dp[nums.size()];
    }
};
#endif //BM_TOTAL_SOLUTION_H
