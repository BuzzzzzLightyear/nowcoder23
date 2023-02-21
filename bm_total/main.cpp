#include <iostream>
#include "bm35/Solution.h"
#include <deque>
#include <vector>

void test(int* p) {
    int a = 10;
    int* q = &a;
    p = q;
    return ;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
//    ListNode* head = new ListNode(0);
//    printf("%d\n", head->val);
//    int a = 20;
//    int b = 30;
//    int* q = &b;
//    int* p = &a;
//    printf("%d, %d\n", p, *p);
//    test(p);
//    p = q;
//    printf("%d, %d\n", p, *p);

    std::deque<int> dq;
    dq.push_front(1);
    dq.push_front(1);
    std::vector<int> vc(4, 100);
    std::vector<int> vc1(vc.begin(), vc.end());
    std::vector<int> vc2(dq.begin(), dq.end());


    return 0;
}
