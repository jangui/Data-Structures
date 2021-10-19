#include <iostream>
#include <vector>
#include "Solution.h"

int main() {
    Solution s;
    std::vector<int> nums1{3, 4, 7, 8};
    std::vector<int> nums2{1, 2};
    double solution = s.findMedianSortedArrays(nums1, nums2);

    std::cout << solution << std::endl;
    return 0;
}
