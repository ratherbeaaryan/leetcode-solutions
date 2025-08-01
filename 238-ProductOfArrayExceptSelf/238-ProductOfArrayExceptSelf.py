# Last updated: 8/1/2025, 11:40:15 PM
class Solution:
    def productExceptSelf(self, nums: List[int]) -> List[int]:
        n = len(nums)
        result = [1]*n
        left = [1]*n
        right = [1]*n
        left[0] = 1
        right[n-1]=1
        for i in range(1,n):
            left[i]=nums[i-1]*left[i-1]
            
        for i in range(n-2,-1,-1):
            
            right[i]= nums[i+1]*right[i+1]
        for i in range(n):
            result[i]=left[i]*right[i]

        return result
        