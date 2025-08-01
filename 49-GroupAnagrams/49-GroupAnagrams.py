# Last updated: 8/1/2025, 11:40:44 PM
from collections import defaultdict
class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        anagrams_list = defaultdict(list)
        for s in strs:
            count = [0]*26
            for c in s:
                count[ord(c) - ord('a')] += 1

            key = tuple(count)
            anagrams_list[key].append(s)

        return list(anagrams_list.values())
        
        