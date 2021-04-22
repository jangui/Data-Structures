//
// Created by jangui on 4/16/21.
//

#include "Solution.h"
#include <unordered_set>

int Solution::lengthOfLongestSubstring(std::string s) {
    int left = 0;
    int right = 0;
    int longestSubstring = 0;
    std::unordered_set<char> unique_chars;
    char current_char;

    while (right != s.size()) {
        current_char = s[right];
        // check if current char in substring
        if (unique_chars.find(current_char) != unique_chars.end()) {
            // current_char in substring
            unique_chars.clear();
            while (s[left] != current_char) left++;
            left++;
            right = left;
            continue;
        }
        // if not already in substring
        unique_chars.insert(current_char);
        if (unique_chars.size() >= longestSubstring) {
            longestSubstring = unique_chars.size();
        }
        right++;
    }
    if (unique_chars.size() >= longestSubstring) {
        longestSubstring = unique_chars.size();
    }
    return longestSubstring;
}
