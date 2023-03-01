//
// Created by 刘健 on 2023/2/22.
//

#ifndef BM_TOTAL_SOLUTION_H
#define BM_TOTAL_SOLUTION_H
#include <vector>
#include <algorithm>
class Cmp {
public:
    bool operator()(int a, int b) {
        return a > b;
    }
};

bool myfunction (int i,int j) { return (i<j); }

class Solution {
public:
    int findKth(std::vector<int>& a, int l, int r, int k) {
        if (l >= r) return a[l];
        int c = a[l];
        int i = l+1, j = r;
        while (i <= j) {
            while (i <= j && a[j] > c) {
                j--;
            }
            while (i <= j && a[i] <= c) {
                i++;
            }
            if (i < j) {
                int tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
        if (i-l == k) return c;
        return i-l > k ? findKth(a, l+1, j, k) : findKth(a, i, r, k-i+l);
    };

    int findKth(std::vector<int> a, int n, int K) {
        // write code here
//        return findKth(a, 0, n-1, n+1-K);
        std::nth_element(a.begin(), a.begin()+K, a.end(), myfunction);
        return a[K];
    }
};
#endif //BM_TOTAL_SOLUTION_H
