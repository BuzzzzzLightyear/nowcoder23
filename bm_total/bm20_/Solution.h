//
// Created by 刘健 on 2023/2/19.
//

#ifndef BM_TOTAL_SOLUTION_H
#define BM_TOTAL_SOLUTION_H

class Solution {
public:
    static const int mod = 1000000007;
    int mergeSort(int left, int right, std::vector<int>& data, std::vector<int>& temp) {
        if (left >= right)
            return 0;
        int mid = (left + right) / 2;
        int res = mergeSort(left, mid, data, temp) + mergeSort(mid + 1, right, data, temp);
        res %= mod;
        int i = left, j = mid + 1;
        for (int k = left; k <= right; ++k) {
            temp[k] = data[k];
        }
        for (int k = left; k <= right; ++k) {
            if (i == mid + 1) {
                data[k] = temp[j++];
            } else if (j == right + 1 || temp[i] < temp[j]) {
                data[k] = temp[i++];
            } else {
                data[k] = temp[j++];
                res += mid + 1 - i;
            }
        }

        return res % mod;
    }
    int InversePairs(vector<int> data) {
        std::vector<int> temp(data.size(), 0);
        return mergeSort(0, data.size() - 1, data, temp);
    }
};

#endif //BM_TOTAL_SOLUTION_H
