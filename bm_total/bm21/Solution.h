//
// Created by 刘健 on 2023/2/19.
//

#ifndef BM_TOTAL_SOLUTION_H
#define BM_TOTAL_SOLUTION_H
class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        int l = 0, r = rotateArray.size() - 1;
        while (l < r) {
            int mid = (l + r) / 2;
            if (rotateArray[r] > rotateArray[mid]) {
                r = mid;
            } else if (rotateArray[r] < rotateArray[mid]) {
                l = mid + 1;
            } else {
                r--;
            }
        }
        return rotateArray[l];
    }
};
#endif //BM_TOTAL_SOLUTION_H
