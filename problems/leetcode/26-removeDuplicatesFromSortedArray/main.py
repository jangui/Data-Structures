from Solution import Solution

def main():
    nums = [0,0,0,0,1,1,1,1,2,3,4,5,5,5,8,9,11,11,12,12]
    solution = Solution()
    total = solution.removeDuplicates(nums)
    print(nums, total)

if __name__ == '__main__':
    main()

