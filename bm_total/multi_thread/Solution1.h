//
// Created by 刘健 on 2023/3/1.
//

#ifndef BM_TOTAL_SOLUTION1_H
#define BM_TOTAL_SOLUTION1_H
using namespace std;
class FooBar {
private:
    int n;
    mutex mtx;
    condition_variable cv;
    bool foo_done = false;
public:
    FooBar(int n) : n(n) {}

    void foo(function<void()> printFoo) {
        for (int i = 0; i < n; i++) {
            unique_lock<mutex> lock(mtx);
            cv.wait(lock, [&]() { return !foo_done; });
            printFoo();
            foo_done = true;
            cv.notify_one();
        }
    }

    void bar(function<void()> printBar) {
        for (int i = 0; i < n; i++) {
            unique_lock<mutex> lock(mtx);
            cv.wait(lock, [&]() { return foo_done; });
            printBar();
            foo_done = false;
            cv.notify_one();
        }
    }
};

#endif //BM_TOTAL_SOLUTION1_H
