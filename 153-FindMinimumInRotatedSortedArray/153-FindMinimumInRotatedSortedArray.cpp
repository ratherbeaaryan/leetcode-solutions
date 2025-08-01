// Last updated: 8/1/2025, 11:40:27 PM
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
          if(nums[start]<=nums[mid]){
            low = min(nums[start],low);
            start = mid+1;

          }  
          else{
            low = min(low,nums[end]);
            end = mid;
          }
        }
        return low;
        
    }
};