# Last updated: 8/1/2025, 11:40:19 PM
class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        n = len(nums)
        hashset = set()
        
        for n in nums:
            if n in hashset:
                return True
            hashset.add(n)
        return False
            
        