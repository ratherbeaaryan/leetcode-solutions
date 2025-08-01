// Last updated: 8/1/2025, 11:40:49 PM
class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n = nums.size();
        int start =0,end = n-1,mid=0;
        while(start<=end){
            mid=(start+end)/2;
            if(nums[mid]==target){
                return mid;
                break;
            }
            else if(nums[mid]<target){
                start = mid+1;
            }

            else {
                end = mid -1;
            }
        }
        
        return start;
        }

        
        

    
};