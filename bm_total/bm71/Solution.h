//
// Created by 刘健 on 2023/2/22.
//

#ifndef BM_TOTAL_SOLUTION_H
#define BM_TOTAL_SOLUTION_H
#include <queue>
#include <vector>
#include <algorithm>
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 给定数组的最长严格上升子序列的长度。
     * @param arr int整型vector 给定的数组
     * @return int整型
     */
    int LIS(std::vector<int>& arr) {
        // 时间复杂度O(N^2)，空间复杂度O(N)
        if (arr.empty()) return 0;
        int res = 1;
        std::vector<int> dp(arr.size(), 1);
        for (int i = 1; i < arr.size(); ++i) {
            for (int j = 0; j < i; ++j) {
                if (arr[i] > arr[j]) {
                    dp[i] = std::max(dp[i], dp[j] + 1);
                    res = std::max(res, dp[i]);
                }
            }
        }
        return res;
    }
};
#endif //BM_TOTAL_SOLUTION_H
