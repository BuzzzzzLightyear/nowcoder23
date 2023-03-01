//
// Created by 刘健 on 2023/3/1.
//

#ifndef BM_TOTAL_SOLUTION_H
#define BM_TOTAL_SOLUTION_H

#include <semaphore.h>
#include <functional>
using namespace std;

class FooBar {
private:
    int n;
    sem_t foo_done, bar_done;
public:
    FooBar(int n) : n(n) {
        sem_init(&foo_done, 0 , 0);
        sem_init(&bar_done, 0 , 1);
    }

    void foo(function<void()> printFoo) {
        for (int i = 0; i < n; i++) {
            sem_wait(&bar_done);
            printFoo();
            sem_post(&foo_done);
        }
    }

    void bar(function<void()> printBar) {
        for (int i = 0; i < n; i++) {
            sem_wait(&foo_done);
            printBar();
            sem_post(&bar_done);
        }
    }
};

#endif //BM_TOTAL_SOLUTION_H
