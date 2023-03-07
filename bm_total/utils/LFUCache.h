//
// Created by 刘健 on 2023/3/7.
//

#ifndef BM_TOTAL_LFUCACHE_H
#define BM_TOTAL_LFUCACHE_H
#include <map>
#include <vector>
#include <iterator>
using namespace std;

struct Node {
    int key;
    int value;
    int freq;
    Node(int k, int v, int f) : key(k), value(v), freq(f) {}
};

class LFUCache {
public:
    LFUCache() : min_freq(0) {}
    LFUCache(int capacity) : capacity(capacity), min_freq(0) {}

    vector<int> LFU(vector<vector<int> >& operators, int k) {
        // write code here
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
        if (base_map.count(k) == 0) {
            return -1;
        }
        int res = base_map[k]->value;
        int freq = base_map[k]->freq;
        // upd freq
        updFreq(base_map[k], freq + 1);
        return res;
    }
    void set(int k, int v) {
        if (base_map.count(k) != 0) {
            base_map[k]->value = v;
            updFreq(base_map[k], base_map[k]->freq + 1);
        } else {
            if (base_map.size() == capacity) {
                removeLast();
            }
            Node* cur = new Node(k, v, 1);
            base_map[k] = cur;
            addFreq(cur, 1);
        }
    }

private:
    void removeLast() {
        if (freq_map.count(min_freq) == 0) {
            // exception
            return ;
        }
        Node* to_del = freq_map[min_freq].back();
        base_map.erase(to_del->key);
        freq_map[min_freq].pop_back();
        delete to_del;
    }
    void updFreq(Node* p, int n_freq) {
        int ori_freq = p->freq;
        int cur_key = p->key;
        // change 4 base_map
        p->freq = n_freq;
        // change 4 freq_map
        if (freq_map.count(ori_freq)) {
            for (deque<Node*>::const_iterator iter = freq_map[ori_freq].begin(); iter != freq_map[ori_freq].end(); iter++) {
                if ((*iter)->key == cur_key) {
                    freq_map[ori_freq].erase(iter);
                    break;
                }
            }
            if (freq_map[ori_freq].empty()) {
                if (min_freq == ori_freq) min_freq ++;
                freq_map.erase(ori_freq);
            }
            addFreq(p, n_freq);
        } else {
            // exception
        }
    }
    void addFreq(Node* p, int n_freq) {
        if (freq_map.count(n_freq)) {
            freq_map[n_freq].push_front(p);
        } else {
            freq_map[n_freq].push_front(p);
            if (min_freq == 0) min_freq = 1;
            else if (min_freq > n_freq) min_freq = n_freq;
        }
    }

private:
    int min_freq;
    int capacity;
    map<int, Node*> base_map;
    map<int, deque<Node*>> freq_map;
};
#endif //BM_TOTAL_LFUCACHE_H
