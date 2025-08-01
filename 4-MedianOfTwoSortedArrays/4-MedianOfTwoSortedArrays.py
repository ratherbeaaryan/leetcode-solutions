# Last updated: 8/1/2025, 11:41:04 PM
class Solution:
    def findMedianSortedArrays(self, nums1: List[int], nums2: List[int]) -> float:
        
        combined_list = nums1 + nums2
        new_list = sorted(combined_list)
        n = len(new_list)
        if n%2==0 :
            n1 = n//2
            n2 = n//2 - 1
            median = float((new_list[n1]+new_list[n2])/2)
            return median

        
        else:
            n3 = n//2
            median = float(new_list[n3])
            return median 
        