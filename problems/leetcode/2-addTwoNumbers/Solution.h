//
// Created by jangui on 4/10/21.
//

#ifndef ADDTWONUMBERS_SOLUTION_H
#define ADDTWONUMBERS_SOLUTION_H


#include "ListNode.h"

class Solution {
    int sum = 0;
    int carry = 0;
    ListNode *solution{};

public:
    ListNode* addTwoNumbers(ListNode *l1, ListNode *l2);

    void handleSumAndCarry();
};


#endif //ADDTWONUMBERS_SOLUTION_H
