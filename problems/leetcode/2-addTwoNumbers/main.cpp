#include <iostream>
#include <vector>
#include "ListNode.h"
#include "Solution.h"

int main() {
    std::vector<int> v1{0};
    std::vector<int> v2{7,3};

    auto *l1 = new ListNode(v1);
    auto *l2 = new ListNode(v2);

    Solution s;
    auto answer = s.addTwoNumbers(l1, l2);
    std::cout << *answer;

    return 0;
}
