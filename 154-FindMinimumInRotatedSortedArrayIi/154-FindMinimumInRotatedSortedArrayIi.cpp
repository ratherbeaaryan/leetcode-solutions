// Last updated: 8/4/2026, 1:01:52 AM
class Solution {
public:
    int findMin(vector<int>& nums) {
        int start = 0;
        int n = nums.size();
        int end = n-1;
        int low = INT_MAX;
        if(n==1){
            return nums[0];
        }
        
        while(start<=end){
          int mid = start-(start-end)/2;
          if(nums[mid]>nums[end]){
            //low = min(nums[start],low);
            start = mid+1;

          }  
          else if(nums[end]>nums[mid]){
            //low = min(low,nums[end]);
            end = mid;
          }
          else{
            end--;
          }

          

        }
        
        
        return nums[start];
        
    }
};