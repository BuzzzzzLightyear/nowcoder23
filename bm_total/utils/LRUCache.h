//
// Created by 刘健 on 2023/3/7.
//

#ifndef BM_TOTAL_LRUCACHE_H
#define BM_TOTAL_LRUCACHE_H
#include <unordered_map>
#include <vector>

using namespace std;

struct Node {
    int key;
    int value;
    Node* pre;
    Node* next;
    Node(int k, int v) : key(k), value(v), pre(NULL), next(NULL) {}
};

class LRUCache {
public:
    LRUCache(int capacity) : capacity(capacity) {
        head = new Node(0,0);
        tail = new Node(0, 0);
        head->next = tail;
        tail->pre = head;
    }

    vector<int> LRU(vector<vector<int> >& operators, int k) {
        capacity = k;
        vector<int> res;
        if (operators.size() == 0) return res;
        for (auto op : operators) {
            if (op[0] == 1) {
                set(op[1], op[2]);
            } else {
                res.push_back(get(op[1]));
            }
        }
        return res;
    }

    int get(int k) {
        if (map.count(k) == 0) {
            return -1;
        }
        moveFirst(map[k]);
        return map[k]->value;
    }
    void set(int k, int v) {
        if (map.count(k) != 0) {
            map[k]->value = v;
            moveFirst(map[k]);
            return ;
        }
        if (map.size() >= capacity) {
            removeLast();
        }
        Node* to_add = new Node(k, v);
        map[k] = to_add;
        insertFirst(to_add);
    }

private:
    void moveFirst(Node* p) {
        if (p->pre == head) return ;
        p->next->pre = p->pre;
        p->pre->next = p->next;
        insertFirst(p);
    }
    void insertFirst(Node* p) {
        p->pre = head;
        p->next = head->next;
        head->next->pre = p;
        head->next = p;
    }
    void removeLast() {
        map.erase(tail->pre->key);
        Node* to_del = tail->pre;
        tail->pre->pre->next = tail;
        tail->pre = tail->pre->pre;
        delete to_del;
    }
private:
    int capacity;
    Node* head;
    Node* tail;
    unordered_map<int, Node*> map;
};


#endif //BM_TOTAL_LRUCACHE_H
