// Last updated: 8/4/2026, 12:55:32 AM
class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(),nums.end());

        int n = nums.size();
        int pairsum = 0;
        int maxpair = 0;
        for(int i=0;i<=n/2;i++){
            pairsum = nums[i] + nums[n-i-1];
            maxpair = max(maxpair,pairsum);


        }

        return maxpair;
        
    }
};