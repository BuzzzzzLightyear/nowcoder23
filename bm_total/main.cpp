#include <iostream>
#include <deque>
#include <vector>
#include <map>
#include <queue>
#include <set>
#include <cstdio>
#include <algorithm>

using namespace std;

int cal(int a) {
    if (a <= 36000) {
        return a * 0.97;
    } else if (a <= 144000) {
        return (a - 36000) * 0.9 + cal(36000);
    } else if (a <= 300000) {
        return (a - 144000) * 0.8 + cal(144000);
    } else if (a <= 420000) {
        return (a - 300000) * 0.75 + cal(300000);
    } else if (a <= 660000) {
        return (a - 420000) * 0.7 + cal(420000);
    } else if (a <= 960000) {
        return (a - 660000) * 0.65 + cal(660000);
    } else {
        return (a - 960000) * 0.55 + cal(960000);
    }
}

int main() {
    int a;
    while (true) {
        cin >> a;
        if (a == 0) break;
        cout << cal(a) << endl;
    }

//    int m, n;
//    cin >> m >> n;
//    std::vector<int > vec;
//    std::priority_queue<int, vector<int>, cmp> pq;
//    int res = 0;
//    for (int i = 0; i < n; ++i){
//        int tmp;
//        cin >> tmp;
//        vec.push_back(tmp);
//    }
//    sort(vec.begin(), vec.end());
//
//    for (int i = 0; i < n; ++i) {
//        int tmp = vec[i];
//        if (pq.size() < m) {
//            pq.push(tmp);
//            res = max(res, tmp);
//        } else {
//            int top = pq.top();
//            pq.pop();
//            pq.push(top + tmp);
//            res = max(res, top + tmp);
//        }
//    }
//    cout << res << endl;
    return 0;
}