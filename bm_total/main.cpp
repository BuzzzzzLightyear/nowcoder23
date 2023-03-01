#include <iostream>
<<<<<<< HEAD
//#include "multi_thread/Solution.h"
//#include "multi_thread/Solution1.h"
#include <deque>
#include <vector>
#include <map>
#include <queue>
#include <set>
using namespace std;
=======
#include "bm96/Solution.h"
#include <deque>
#include <vector>
#include <queue>
#include <string>
>>>>>>> 426dde67335b6ef2c48a4eeebbd795a05626c17a

bool cmp(vector<int>a, vector<int>b) {
    return a[1] < b[1];
}

<<<<<<< HEAD
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
=======
struct cmp {
    bool operator()(int a, int b) {
        return a > b;
    }
};

int main() {
//    Solution so;
//    printf("%s\n", so.solve("abcdefg").c_str());
//    printf("val %d\n", so.findKth({1,3,5,2,2}, 5, 5));
//    so.Insert(5);
//    printf("%lf\n", so.GetMedian());
//    so.Insert(2);
//    printf("%lf\n", so.GetMedian());
//    so.Insert(3);
//    printf("%lf\n", so.GetMedian());
//    std::vector<int> vec{3,5,7,1,2,4,6,3,8,9,5,6};
//    so.LIS(vec);
//    std::string str = "12345678";
//    printf("%s\n", str.substr(3, 4).c_str());
>>>>>>> 426dde67335b6ef2c48a4eeebbd795a05626c17a
    return 0;
}
