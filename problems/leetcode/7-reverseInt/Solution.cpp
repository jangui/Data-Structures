//
// Created by jangui on 4/13/21.
//

#include "Solution.h"
#include <vector>
#include <cstdlib>

int Solution::reverse(int x) {
    // edge case
    if (x == INT_MIN) {
        return 0;
    }

    // build vector of digits in reverse order
    std::vector<int> digits{};
    buildReverseDigitsVector(x, digits);

    // overflow edge case
    if (digits.size() == 10 && digits[0] > 2) {
        return 0;
    }

    // build new number using digits from vector
    int solution = intify(digits);

    // fix sign if original number negative
    if (x < 0) {
        solution *= -1;
    }

    // check bounds
    if (solution >= INT_MAX or solution <= INT_MIN) {
        return 0;
    }
    return solution;
}

// check for overflow during addition
bool Solution::checkAdditionOverflow(int addend1, int addend2) {
    if (addend1 > 0 && addend2 < 0) return false;
    if (addend1 < 0 && addend2 > 0) return false;
    if (addend1 > 0 && addend2 > 0) {
        if (INT_MAX - addend1 < addend2) { return true;}
    } else if (addend1 < 0 && addend2 < 0) {
        if (INT_MIN - addend1 > addend2) { return true;}
    }
    return false;
}

// builds a vector of the digits in x in reverse order
void Solution::buildReverseDigitsVector(int x, std::vector<int> &digits) {
    std::div_t result = div(abs(x), 10);

    // get digits of x into vector
    while (result.quot != 0 ) {
        digits.push_back(result.rem);
        result = div(result.quot, 10);
    }
    if (result.rem != 0) digits.push_back(result.rem);
}

// returns an int built from using ints in vector<int> the digits
// example: vector<int>{1,2,3} -> 123
int Solution::intify(std::vector<int> &digits) {
    int solution = 0;
    int i = digits.size()-1;
    int addend;
    for (auto iter = digits.begin(); iter < digits.end(); iter++) {
        addend = pow(10, i) * (*iter);
        if (checkAdditionOverflow(solution, addend)) return 0;
        solution += addend;
        i--;

    }
    return solution;
}
