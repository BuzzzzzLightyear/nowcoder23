#include <iostream>
//#include "multi_thread/Solution.h"
//#include "multi_thread/Solution1.h"
#include <deque>
#include <vector>
#include <map>
#include <queue>
#include <set>
using namespace std;

bool cmp(vector<int>a, vector<int>b) {
    return a[1] < b[1];
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::vector<vector<int>> vec_vec;
    vec_vec.push_back({1,20});
    vec_vec.push_back({2,10});
    vec_vec.push_back({3,2});
    vec_vec.push_back({4,11});
    sort(vec_vec.begin(),vec_vec.end(),cmp);
    for(auto it : vec_vec){
        printf("%d %d\n", it[0], it[1]);
    }
    return 0;
}
