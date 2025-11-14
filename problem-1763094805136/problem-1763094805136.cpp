// Last updated: 11/14/2025, 10:03:25 AM
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