# Name= Jogeswar Panigrahi
#Difficulty= Easy
#Problem number= 1
#Link=https://leetcode.com/problems/two-sum/

from typing import List
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        values = {}
        for idx, value in enumerate(nums):
            if target - value in values:
                return [values[target - value], idx]
            else:
                values[value] = idx
