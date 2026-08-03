// Last updated: 8/4/2026, 12:54:11 AM
class Solution {
public:
    long long maxPairStrength(vector<int>& nums) {
        long long maxi = 0;
        for(int i=0;i<nums.size();i++){
            for(int j = i+1;j<nums.size();j++){
                long long x = __gcd(nums[i],nums[j]);
                maxi = max(maxi,(1LL * nums[i]*nums[j])/(x*x));
            }
        }
        return maxi;
        
        
    }
};