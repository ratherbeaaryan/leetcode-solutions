// Last updated: 8/24/2025, 3:37:29 PM
class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int left = 0;
        int maxi = 0;
        int zerocount = 0;
        int sum=0;
        for(int right = 0;right<nums.size();right++){
            if(nums[right]==0){
                zerocount++;
            }
            

            while(zerocount>1){
                if(nums[left]==0){
                    zerocount--;
                }
                left++;
            }

            maxi = max(maxi,right-left);

            
        }
        
        return maxi;
        
    }
};