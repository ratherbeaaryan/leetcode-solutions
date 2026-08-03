// Last updated: 8/4/2026, 12:56:33 AM
class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> ans;
        //ans.reserve(2*n);

        for(int i = 0; i < n; i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[i + n]);
        }

        return ans;
        
    }
};