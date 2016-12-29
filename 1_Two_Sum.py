Given an array of integers, return indices of the two numbers such that they add up to a specific target.

You may assume that each input would have exactly one solution.

Example:
Given nums = [2, 7, 11, 15], target = 9,

Because nums[0] + nums[1] = 2 + 7 = 9,
return [0, 1].
UPDATE (2016/2/13):
The return format had been changed to zero-based indices. Please read the above updated description carefully.

https://leetcode.com/problems/two-sum/


class Solution(object):
    def twoSum(self, nums, target):
        map = dict({element[1]: element[0] for element in enumerate(nums)})
        
        for index, element in enumerate(nums):
            res = map.get(target - element, -1)
            if res != -1 and index != res:
                return sorted([index, res])
                        
        
