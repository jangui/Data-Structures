//
// Created by jangui on 4/10/21.
//

#include "ListNode.h"

ListNode::ListNode() : val(0), next(nullptr) {}

ListNode::ListNode(int x) : val(x), next(nullptr) {}

ListNode::ListNode(int x, ListNode *next) : val(x), next(next) {}

ListNode::ListNode(std::vector<int> &values) {
    if (values.empty()) {
        next=nullptr;
        val=0;
        return;
    }

    ListNode *curr = this;
    val = values[0];

    for (int i = 1; i < values.size(); i++) {
        curr->next = new ListNode(values[i]);
        curr = curr->next;
    }
}

ListNode *ListNode::getNext() const {
    return next;
}

int ListNode::getVal() const {
    return val;
}

void ListNode::setVal(int i) {
    ListNode::val = i;
}

void ListNode::setNext(ListNode *node) {
    ListNode::next = node;
}

std::ostream &operator<<(std::ostream &os, const ListNode &node) {
    ListNode const *curr;
    curr = &node;
    os << "[";
    for (;;) {
        if (curr->next == nullptr) {
            os << curr->val << "]";
            break;
        }
        os << curr->val << ", ";
        curr = curr->next;

    }
    return os;
}

