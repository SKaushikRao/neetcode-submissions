class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:

        seen = {}
        #ill use enumerate function - it lets you get both the index and the value

        for i, num in enumerate(nums):
            complement = target - num

            if complement in seen:

                return [seen[complement], i]

            seen[num] = i