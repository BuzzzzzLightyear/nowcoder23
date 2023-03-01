//
// Created by 刘健 on 2023/2/22.
//

#ifndef BM_TOTAL_SOLUTION_H
#define BM_TOTAL_SOLUTION_H
#include <string>
#include <stack>
using namespace std;
class Solution {
public:
    string trans(string s, int n) {
        // write code here
        string res;
        for(int i = 0; i < n; i++){
            //大小写转换
            if (s[i] <= 'Z' && s[i] >= 'A')
                res += s[i] - 'A' + 'a';
            else if(s[i] >= 'a' && s[i] <= 'z')
                res += s[i] - 'a' + 'A';
            else
                //空格直接复制
                res+=s[i];
        }

        std::stack<string> st;
        int cur = 0;
        while (cur < res.size()) {
            size_t pos = res.substr(cur, res.size() - cur).find_first_of(' ');
            if (pos != std::string::npos) {
                if (pos == 0) {
                    cur ++;
                    st.push(" ");
                    continue;
                }
                st.push(res.substr(cur, pos));
                st.push(" ");
                cur += pos + 1;
            } else {
                st.push(res.substr(cur, res.size() - cur));
                break;
            }
        }
        res.clear();
        while (!st.empty()) {
            res += st.top();
            st.pop();
        }
        return res;
    }
};
#endif //BM_TOTAL_SOLUTION_H
