// Last updated: 8/4/2026, 12:54:24 AM
class Solution {
public:
    int evenNumberBitwiseORs(vector<int>& nums) {
        int result = 0;
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]%2 == 0){
                result = result | nums[i];
            }
        }
        return result;
        
    }
};