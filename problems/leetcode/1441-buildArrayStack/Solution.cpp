#include <vector>
#include <iterator>
#include <string> 

class Solution {
public:
    Solution() {}

    std::vector<std::string> buildArray(std::vector<int>& target, int n) {
        std::vector<std::string> solution;

        if (target.size() == 0) {
            return solution;
        }

        int current_ind = 0;
        

        // iterate over range n
        for (int i = 1; i < n + 1; i++) {
            solution.push_back("Push"); 

            if (target[current_ind] == i) {
                current_ind++;
                if (target.size() == current_ind) return solution;

            } else {
               solution.push_back("Pop"); 
            }
        }
        return solution;
    }

};
