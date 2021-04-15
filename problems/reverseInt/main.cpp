#include <iostream>
#include <vector>
#include "Solution.h"

int main() {
    Solution s;
    std::vector<int> testCases{0, 120, -723, -1534236469, 156384741, 1563847412, INT_MAX, INT_MIN};

    for (auto iter = testCases.begin(); iter < testCases.end(); iter++) {
       std::cout << *iter << " -> " << s.reverse(*iter) << std::endl;
    }
    return 0;
}
