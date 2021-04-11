//
// Created by jangui on 4/10/21.
//

#include "Solution.h"

ListNode *Solution::addTwoNumbers(ListNode *l1, ListNode *l2) {
    solution = new ListNode();
    auto current_answer = solution;

    for (;;) {
        sum = l1->getVal();
        l1 = l1->getNext();

        if (l2 != nullptr) {
            sum += l2->getVal();
            l2 = l2->getNext();
        }

        handleSumAndCarry();

        current_answer->setVal(sum);
        if (l1 == nullptr) {
           if (carry == 0 and l2 == nullptr) break;
           current_answer->setNext(new ListNode(carry));
           current_answer = current_answer->getNext();
           break;
        }
        current_answer->setNext(new ListNode());
        current_answer = current_answer->getNext();
    }
    // case when l2 longer than l1
    if (l2 != nullptr) {
        for (;;) {
            sum = l2->getVal();
            handleSumAndCarry();
            current_answer->setVal(sum);
            l2 = l2->getNext();
            if (l2 == nullptr) {
                if (carry == 0) break;
                current_answer->setNext(new ListNode(carry));
                break;
            }
            current_answer->setNext(new ListNode());
            current_answer = current_answer->getNext();

        }
    }
    return solution;
}

void Solution::handleSumAndCarry() {
    sum += carry;
    if (sum < 10) {
        carry = 0;
    } else if (sum > 10) {
        carry = 1;
        sum -= 10;
    } else if (sum == 10) {
        carry = 1;
        sum = 0;
    }
}
