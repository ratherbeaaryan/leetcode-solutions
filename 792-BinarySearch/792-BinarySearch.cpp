// Last updated: 8/1/2025, 11:39:52 PM
class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int start = 0 ;
        int end = n-1;
        while(start <= end){
            int mid =end + (start-end)/2;
            if(nums[mid]==target){
                return mid;
            }
            else if(nums[mid]<target){
                start = mid+1;
            }
            else{
                end= mid-1;

            }
        }
        return -1;
        
    }
};