// Last updated: 8/4/2026, 12:54:27 AM
class Solution {
public:
    long long maxTotalValue(vector<int>& nums, int k) {
        int n = nums.size();
        int maxi = nums[0];
        int mini = nums[0];
        int diff = 0;
        long long ans = 0;
        for(long long i=0;i<n;i++){
            maxi = max(maxi,nums[i]);
            mini = min(mini,nums[i]);

            
        }
        diff = maxi - mini;

        ans = (long long)diff*k;
        return ans;
        
        
        
    }
};