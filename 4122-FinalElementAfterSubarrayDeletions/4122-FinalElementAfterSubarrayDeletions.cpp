// Last updated: 8/4/2026, 12:54:20 AM
class Solution {
public:
    int finalElement(vector<int>& nums) {
        int n = nums.size();
        return max(nums[0],nums.back());
        
        
        
    }
};