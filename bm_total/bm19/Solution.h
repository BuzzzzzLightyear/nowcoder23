//
// Created by 刘健 on 2023/2/19.
//

#ifndef BM_TOTAL_SOLUTION_H
#define BM_TOTAL_SOLUTION_H
#include <vector>

// tql
class Solution {
public:
    int findPeakElement(std::vector<int>& nums) {
        int left = 0;
        int right = nums.size() - 1;
        //二分法
        while(left < right){
            int mid = (left + right) / 2;
            //右边是往下，不一定有坡峰
            if(nums[mid] > nums[mid + 1])
                right = mid;
            //右边是往上，一定能找到波峰
            else
                left = mid + 1;
        }
        //其中一个波峰
        return right;
    }
};

#endif //BM_TOTAL_SOLUTION_H
