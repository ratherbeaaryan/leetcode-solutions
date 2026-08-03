// Last updated: 8/4/2026, 12:57:26 AM
class Solution {
public:
    int largestSumAfterKNegations(vector<int>& nums, int k) {
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n && k>0 ;i++){
            if(nums[i]<0 ) {
            nums[i] = -nums[i];
            
            k--;
            }
        }
        int sum = 0;
        int mini = INT_MAX;
        for(int i=0;i<n;i++){
            sum+=nums[i];
            mini = min(mini,abs(nums[i]));
        }
        if(k%2 == 1){
            sum = sum - 2*mini;
        }
        return sum;

        
        
    }
};