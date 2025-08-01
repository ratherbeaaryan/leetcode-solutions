# Last updated: 8/1/2025, 11:41:06 PM
class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        n = len(nums)
        indexed_arr = []
        # map banaya
        for i,num in enumerate(nums):
            indexed_arr.append((num,i))
        #array sort kari
        indexed_arr.sort()
        #two pointer approach lgaai
        right,left = 0,n-1
        while right<left:
            sum  = indexed_arr[right][0]+indexed_arr[left][0]
            if sum  == target:
                return [indexed_arr[right][1],indexed_arr[left][1]]
            elif sum < target:
                right+=1
            else:
                left-=1
        return []