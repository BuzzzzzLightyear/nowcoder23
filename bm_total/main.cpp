#include <iostream>
#include <deque>
#include <vector>
#include <map>
#include <queue>
#include <set>
#include <cstdio>
#include <algorithm>

using namespace std;

struct Node {
    int order;
    std::string name;
    int no;
    int weight;
    Node(std::string a, int b, int c, int d) {
        name = a;
        no = b;
        weight = c;
        order = d;
    }
};

class Solution {
public:
    static bool cmp(Node a, Node b) {
        if (a.name != b.name) {
            return a.order < b.order;
        } else if (a.weight != b.weight) {
            return a.weight < b.weight;
        } else {
            return a.no < b.no;
        }
    };
    int SortAndPrint(int n, std::vector<Node> jobs) {
        // write code here
        sort(jobs.begin(), jobs.end(), cmp);
        for (auto it : jobs) {
            cout << it.name << " " << it.no << " " << it.weight << endl;
        }
        return 0;
    }
    static std::map<std::string, int> map_order;
};
/*
int main(){
    int n;
    cin >> n;
    std::vector<Node> vec;
    std::map<string, int> map_order;
    std::string name;
    int a,b, i = 0;
    while (cin >> name >> a >> b) {
        if (map_order.count(name) == 0) {
            map_order[name] = i++;
        }
        Node tmp(name, a, b, map_order[name]);
        vec.emplace_back(tmp);
    }
    Solution().SortAndPrint(n, vec);

    return 0;
}*/

struct cmp {
    bool operator()(int a, int b) {
        return a > b;
    }
};

int main() {
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
