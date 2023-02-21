//
// Created by 刘健 on 2023/2/19.
//

#ifndef BM_TOTAL_SOLUTION_H
#define BM_TOTAL_SOLUTION_H
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param nums int整型vector
     * @param target int整型
     * @return int整型
     */
    int search(vector<int>& nums, int target) {
        // write code here
        if (nums.size() == 0) return -1;
        int l = 0, r = nums.size() - 1;
        while (l < r) {
            int mid = (l + r) / 2;
            if (target == nums[mid]) {
                return mid;
            } else if (target > nums[mid]) {
                l = mid + 1;
            } else {
                r = mid - 1;
            }
        }
        return nums[l] == target ? l : -1;
    }
};
#endif //BM_TOTAL_SOLUTION_H
