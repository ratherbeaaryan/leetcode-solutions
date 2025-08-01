// Last updated: 8/1/2025, 11:40:25 PM
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int n = nums.size();
        int start = 1 , end = n-2;
        if(n==1){
            return 0;
        }
        if(nums[0]>nums[1]){
            return 0;
        }
        if(nums[n-1]>nums[n-2]){
            return n-1;
        }

        while(start<=end){
            int mid = start+(end-start)/2;
            if(nums[mid]>nums[mid+1] && nums[mid]>nums[mid-1]){
                return mid;
            }
            else if(nums[mid]<nums[mid+1]){
                start = mid+1;
            }
            else{
                end =mid-1;
            }
        }
        
    return 1;
    }
};