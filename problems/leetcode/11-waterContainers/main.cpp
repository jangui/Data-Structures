#include <iostream>
#include <vector>
#include "cmake-build-debug/Solution.h"

int main() {
    std::vector<int> heights = {1,8,6,2,5,4,8,3,7};
    Solution solution;
    int maxArea = solution.maxArea(heights);
    std::cout << "Max Area: " << maxArea << std::endl;
    return 0;
}
