//
// Created by jangui on 4/13/21.
//

#ifndef REVERSEINT_SOLUTION_H
#define REVERSEINT_SOLUTION_H

#include <vector>

class Solution {
public:
    int reverse(int x);
    bool checkAdditionOverflow(int addend1, int addend2);
    void buildReverseDigitsVector(int x, std::vector<int> &digits);
    int intify(std::vector<int> &digits);
};


#endif //REVERSEINT_SOLUTION_H
