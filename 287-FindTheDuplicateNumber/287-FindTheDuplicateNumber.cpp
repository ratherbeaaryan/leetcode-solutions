// Last updated: 8/4/2026, 1:00:28 AM
class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        int n = nums.size();
        sort(nums.begin(),nums.end());

        for(int i=0;i<n;i++){
            if(nums[i]==nums[i+1]){
                return nums[i];
            }
            
        }
        return 0;
        
    }
};