#include <iostream>
#include "bm96/Solution.h"
#include <deque>
#include <vector>
#include <queue>
#include <string>

void test(int* p) {
    int a = 10;
    int* q = &a;
    p = q;
    return ;
}

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
    return 0;
}
