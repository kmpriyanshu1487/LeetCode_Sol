class Solution:
    def twoSum(self, nums, target):
        num_map = {}  # Dictionary to store number and its index
        
        for i, num in enumerate(nums):
            complement = target - num
            if complement in num_map:
                return [num_map[complement], i]
            num_map[num] = i
        
        # According to the problem statement, there is exactly one solution
        return []

# Example usage:
solution = Solution()

nums1 = [2, 7, 11, 15]
target1 = 9
print("Example 1:", solution.twoSum(nums1, target1))  # Output: [0, 1]

nums2 = [3, 2, 4]
target2 = 6
print("Example 2:", solution.twoSum(nums2, target2))  # Output: [1, 2]

nums3 = [3, 3]
target3 = 6
print("Example 3:", solution.twoSum(nums3, target3))  # Output: [0, 1]
