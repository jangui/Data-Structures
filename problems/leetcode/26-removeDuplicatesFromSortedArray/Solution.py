class Solution:

    def removeDuplicates(self, nums: list[int]) -> int:
        """
        remove duplicates inplace from array and returns number of unique elements
        """
        if len(nums) == 0:
            return 0

        current_num = nums[-1]
        for i in range(len(nums)-2, -1, -1):
            num = nums[i]
            if num == current_num:
                del nums[i]
            else:
                current_num = num

        return len(nums)