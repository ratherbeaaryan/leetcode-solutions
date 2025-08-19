// Last updated: 8/19/2025, 1:56:49 PM
class Solution {
public:

    int binarysearch(vector<int>& nums, int start,int end,int target){
        int mid = end +(start-end)/2;
        if(start>end) return -1;
        if(nums[mid]==target){
            return mid;
        }
        if(nums[mid]>target){
            return binarysearch(nums,start,mid-1,target);
        }
        else{
            return binarysearch(nums,mid+1,end,target);
        }
    }
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int start =0;
        int end = n-1;
        return binarysearch(nums,start,end,target);
        
        
    }
    
};