//
// Created by 刘健 on 2023/2/19.
//

#ifndef BM_TOTAL_SOLUTION_H
#define BM_TOTAL_SOLUTION_H
class Solution {
public:
    bool Find(int target, std::vector<std::vector<int> > array) {
        if (array.size() == 0 || array[0].size() == 0) return false;
        int l1 = 0, l2 = array.size() - 1;
        int r1 = 0, r2 = array[0].size() - 1;
        while (true) {
            if (array[l2][r2] == target) return true;
            if (array[l2][r2] < target) return false;
            if (array[l1][r1] == target) return true;
            if (array[l1][r1] > target) return false;
            if (l2 > l1 && array[l2][r1] > target) {
                l2--;
            } else if (r2 > r1 && array[l1][r2] > target) {
                r2--;
            } else if (l2 > l1 && array[l1][r2] < target) {
                l1++;
            } else {
                r1++;
            }
        }
    }
};

#endif //BM_TOTAL_SOLUTION_H
