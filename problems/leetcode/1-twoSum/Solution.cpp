#include <map>
#include <vector>
#include <iterator>
#include <iostream>

class Solution {
public:
    std::vector<int> twoSum(std::vector<int> &nums, int target) {
        // easy edge case
        if (nums.size() == 2) return std::vector<int>{0,1};

        // iterate over nums
        for (std::vector<int>::iterator i = nums.begin(); i != nums.end(); i++) {
            // find pair number that sums to target
            int adden = target - *i;

            // get current index
            int index = std::distance(nums.begin(), i);

            // look for pair
            std::map<int,int>::iterator map_iter = seen.find(adden);
            if (map_iter != seen.end()) {
                // get index of pair
                int pair_index = std::get<1>(*map_iter);
                // return vector w/ index of pair and current index
                return std::vector<int>{pair_index, index};
            } else {
               // pair wasn't in map
               // add current number and inde to map
               seen.insert(std::pair<int,int>(*i, index));
            }
        }
        return std::vector<int>{};
    }

    void printSolution(std::vector<int> &nums, int target) {
        std::cout << "{";
        std::vector<int> sol = twoSum(nums, target);
        //std::vector<int> sol{1,2};
        for (std::vector<int>::iterator i = sol.begin(); i != sol.end(); i++) {
            std::cout << *i;

            if (i != sol.end()-1) {
            std::cout << ", ";
            }
        }
        std::cout << "}" << std::endl;
    }
        
private:
    std::map<int, int> seen;

};

int main() {
    Solution s;
    std::vector<int> nums{-3,4,3,9};
    int target = 0;
    s.printSolution(nums, target);
}
