//
// Created by 刘健 on 2023/2/23.
//

#ifndef BM_TOTAL_SOLUTION_H
#define BM_TOTAL_SOLUTION_H
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     * 计算成功举办活动需要多少名主持人
     * @param n int整型 有n个活动
     * @param startEnd int整型vector<vector<>> startEnd[i][0]用于表示第i个活动的开始时间，startEnd[i][1]表示第i个活动的结束时间
     * @return int整型
     */
    struct cmp1 {
        bool operator()(int a, int b) {
            return a > b;
        }
    };
    static bool cmp(vector<int> a, vector<int> b) {
        return a[0] < b[0];
    }
    int minmumNumberOfHost(int n, vector<vector<int> >& startEnd) {
        // write code here
        priority_queue<int, vector<int>, cmp1> pq;
        sort(startEnd.begin(), startEnd.end(), cmp);
        int res = 0;
        for (size_t i = 0; i < startEnd.size(); ++i) {
            while (!pq.empty() && startEnd[i][0] >= pq.top()) {
                pq.pop();
            }
            pq.push(startEnd[i][1]);
            res = max(res, (int)pq.size());
        }
        return res;
    }
};
#endif //BM_TOTAL_SOLUTION_H
