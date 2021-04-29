#include "Solution.h"
#include <cmath>
#include <vector>

#include <iostream>

double Solution::findMedianSortedArrays(std::vector<int> &nums1, std::vector<int> &nums2) {
    int size = nums1.size() + nums2.size();
    int medianInd = std::ceil(size / 2) - 1;
    bool even = false;
    if (size % 2 == 0) even = true;

    int i = -1;
    int nums1Ind = -1;
    int nums2Ind = -1;

    while (i < medianInd) {
        if (nums1Ind + 1 < nums1.size() && nums2Ind + 1 < nums2.size()) {
            if (nums1[nums1Ind+1] >= nums2[nums2Ind+1]) {
               nums2Ind++;
            } else if (nums1[nums1Ind+1] < nums2[nums2Ind+1]) {
                nums1Ind++;
            }
        } else if (nums1Ind+1 < nums1.size()) {
            nums1Ind++;
        } else if (nums2Ind+1 < nums2.size()) {
            nums2Ind++;
        }
        i++;
    }
    std::cout << nums1Ind << " n1Ind n2Ind " << nums2Ind << std::endl;

    if (even) {
        return avgNextTwoLargest(nums1, nums1Ind, nums2, nums2Ind);
    } else {
        std::vector<int> *largest = nullptr;
        return nextLargest(nums1, nums1Ind, nums2, nums2Ind, &largest);
    }

}

double Solution::nextLargest(std::vector<int> &nums1, int nums1Ind, std::vector<int> &nums2, int nums2Ind, std::vector<int> **largest) {
    if (nums1Ind + 1 < nums1.size()) {
        *largest = &nums2;
        return nums2[nums2Ind+1];
    } else if (nums2Ind + 1 < nums2.size() ) {
        *largest = &nums1;
        return nums1[nums1Ind+1];
    }
    if (nums1[nums1Ind+1] > nums2[nums2Ind+1]) {
        *largest = &nums1;
        return nums1[nums1Ind+1];
    }
    *largest = &nums2;
    return nums2[nums2Ind+1];

}

double Solution::avgNextTwoLargest(std::vector<int> &nums1, int nums1Ind, std::vector<int> &nums2, int nums2Ind) {
    std::vector<int> *largest;
    double first = nextLargest(nums1, nums1Ind, nums2, nums2Ind, &largest);
    double second;
    if (largest == &nums1) {
        second = nextLargest(nums1, nums1Ind+1, nums2, nums2Ind, &largest);
    } else if (largest == &nums2) {
        second = nextLargest(nums1, nums1Ind, nums2, nums2Ind+1, &largest);
    }
    std::cout << first << " f s " << second << std::endl;
    return (first + second) / 2;
}
