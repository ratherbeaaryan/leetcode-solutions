# Last updated: 8/1/2025, 11:40:05 PM
import heapq
from collections import Counter
class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        count = Counter(nums)
        result = count.most_common(k)
        key_only = [item for item,count in result]
        return key_only

        
            
             
                
        