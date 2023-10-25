'''Given an array of integers nums sorted in non-decreasing order, find the starting and ending position of a given target value.

If target is not found in the array, return [-1, -1].

You must write an algorithm with O(log n) runtime complexity.

 

Example 1:

Input: nums = [5,7,7,8,8,10], target = 8
Output: [3,4]
Example 2:

Input: nums = [5,7,7,8,8,10], target = 6
Output: [-1,-1]
Example 3:

Input: nums = [], target = 0
Output: [-1,-1]'''

#Solution

class Solution:
    def searchRange(self, nums: List[int], target: int) -> List[int]:
        def binarysearch(nums,target):
            left=0
            right=len(nums)-1
            index = -1
            while left <= right:
                mid = (left+right)//2
                if target > nums[mid]:
                    left = mid + 1
                else:
                    right = mid - 1
            return(left,right)
        l = binarysearch(nums,target-0.1)
        r = binarysearch(nums,target+0.1)
        if l[0]!= r[0]:
            return[l[0],r[1]]
        return[-1,-1]

