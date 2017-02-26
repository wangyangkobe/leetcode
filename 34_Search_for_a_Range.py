https://leetcode.com/problems/search-for-a-range/?tab=Description


class Solution(object):
    def searchRange(self, nums, target):
        """
        :type nums: List[int]
        :type target: int
        :rtype: List[int]
        """
        low  = 0
        high = len(nums) - 1
        while low <= high:
            middle = (low + high) /2
            if nums[middle] > target:
                high = middle - 1
            elif nums[middle] < target:
                low = middle + 1
            else:
                i, j = middle, middle
                for index, element in enumerate(nums[middle:]):
                    if element == target:
                        j = middle + index
                for index, element in enumerate(nums[middle::-1]):
                    if element == target:
                        i = middle - index
                return [i, j]
        return [-1, -1]
        
