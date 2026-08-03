// Last updated: 8/4/2026, 1:03:38 AM
class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n = nums.size();
        int maxi=0;

        for(int i=0;i<n;i++){
            if(i > maxi){
                return false;
            }
            maxi = max(maxi , i+nums[i]);
        }
        
        return true;
        
    }
};