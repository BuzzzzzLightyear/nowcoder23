//
// Created by 刘健 on 2023/2/23.
//

#ifndef BM_TOTAL_SOLUTION_H
#define BM_TOTAL_SOLUTION_H
#include <string>
using namespace std;
class Solution {
public:
    /**
     * 反转字符串
     * @param str string字符串
     * @return string字符串
     */
    string solve(string str) {
        // write code here
        reverse(str.begin(), str.end());
        return str;
    }
};
#endif //BM_TOTAL_SOLUTION_H
