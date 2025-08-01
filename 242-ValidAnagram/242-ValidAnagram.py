# Last updated: 8/1/2025, 11:40:12 PM
class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        counter1 = {}
        counter2 = {}
        for char in s:
            if char in counter1:
                counter1[char]+=1
            else:
                counter1[char]=1
        for char in t:
            if char in counter2:
                counter2[char]+=1
            else:
                counter2[char]=1
        if counter1 == counter2:
            return True
        else:
            return False