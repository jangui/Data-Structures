
class Solution():
    def __init__(self):
        self.seen = {}

    def twoSum(self, nums, target):
        """
        given a list of integers, return the index of the numers that sum to target
        assumptions:
            - one solution per array
            - 2 <= len(nums) <= 10**3
            - -10**9 < nums[i] <= 10**9
            - -10**9 < target <= 10**9
        arguements:
            nums: [int]
            target: int
        return:
            [int]
        """
        if len(nums) == 2:
            return [0,1]

        for i, num in enumerate(nums):
            if target-num in self.seen:
                return [self.seen[target-num], i]
            else:
                self.seen[num] = i
        return []
