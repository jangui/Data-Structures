//
// Created by jangui on 4/10/21.
//

#ifndef ADDTWONUMBERS_LISTNODE_H
#define ADDTWONUMBERS_LISTNODE_H


#include <ostream>
#include <vector>

class ListNode {
    int val;
    ListNode *next;

public:
    ListNode();

    explicit ListNode(int x);

    ListNode(int x, ListNode *next);

    explicit ListNode(std::vector<int> &values);

    int getVal() const;

    ListNode *getNext() const;

    void setNext(ListNode *node);

    friend std::ostream &operator<<(std::ostream &os, const ListNode &node);

    void setVal(int i);
};


#endif //ADDTWONUMBERS_LISTNODE_H
