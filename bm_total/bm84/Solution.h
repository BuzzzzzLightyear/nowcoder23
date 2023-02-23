//
// Created by 刘健 on 2023/2/22.
//

#ifndef BM_TOTAL_SOLUTION_H
#define BM_TOTAL_SOLUTION_H
#include <string>
#include <vector>
using namespace std;
class Solution {
public:
    /**
     *
     * @param strs string字符串vector
     * @return string字符串
     */
    string longestCommonPrefix(vector<string>& strs) {
        // 纵向扫描
        if(strs.size() == 0){
            return "";
        }
        int rows = strs.size();
        int cols = strs[0].length();
        //开始扫描
        for(int i=0;i<cols;i++){
            char firstChar = strs[0][i];
            for(int j=1;j<rows;j++){
                if(strs[j].length()==i || strs[j][i]!=firstChar){
                    return strs[0].substr(0,i);
                }
            }
        }
        return strs[0];
    }
};
#endif //BM_TOTAL_SOLUTION_H
