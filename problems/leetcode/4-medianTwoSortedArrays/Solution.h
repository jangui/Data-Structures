
#ifndef SOLUTION_H
#define SOLUTION_H

#include <vector>


class Solution {
public:
    double findMedianSortedArrays(std::vector<int>& nums1, std::vector<int>& nums2);
    double nextLargest(std::vector<int> &nums1, int nums1Ind, std::vector<int> &nums2, int nums2Ind, std::vector<int> **largest);
    double avgNextTwoLargest(std::vector<int> &nums1, int nums1Ind, std::vector<int> &nums2, int nums2Ind);
};


#endif SOLUTION_H
