// Last updated: 11/14/2025, 9:46:27 AM
class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> newarr(2*n);
        for(int i=0;i<n;i++){
            newarr[i] = nums[i];
        }
        for(int i=0;i<n;i++){
            newarr[i+n] = nums[i];
        }

        return newarr;


        
    }
};