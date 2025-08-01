// Last updated: 8/1/2025, 11:40:29 PM
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        
        int xorr = 0;
        for(int i = 0;i<n;i++){
            xorr = xorr ^ nums[i];

        }
        return xorr;
        
    }
};