# Last updated: 8/1/2025, 11:40:55 PM
class Solution:
    def removeElement(self, nums: List[int], val: int) -> int:
        n = len(nums)
        start,end = 0,n-1
        count  = 0
        while start<=end:
            if nums[start]==val and nums[end]!=val:
                count+=1
                nums[start],nums[end] = nums[end],nums[start]
                start+=1
                end-=1
            elif nums[start]!=val and nums[end]!=val:
                start+=1
            elif nums[start]==val and nums[end]==val:
                count+=1
                end-=1

            else:
                count+=1
                start+=1
                end-=1
        k = n-count
        
        return k
            

        