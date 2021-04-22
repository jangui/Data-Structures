class Solution:
    def __init__(self):
        self.seen = {}
    def lengthOfLongestSubstring(self, s: str) -> int:
        self.seen = {}
        longest = 0
        left_ind = 0
        right_ind = 0
        while right_ind < len(s):
            current_char = s[right_ind]
            if current_char not in self.seen:
                self.seen[current_char] = 1
                right_ind += 1

                if len(self.seen) > longest:
                    longest = len(self.seen)
            else:
                while (s[left_ind] != current_char):
                    left_ind += 1
                left_ind += 1
                right_ind = left_ind
                self.seen = {}
        return longest

def main():
    s = Solution()
    test_cases = ["bbbb", "a", "", "aaabsdfaeekafkaheodn.x0adfanndd"]
    for test_case in test_cases:
        print(s.lengthOfLongestSubstring(test_case))

if __name__ == "__main__":
    main()
