// Last updated: 8/4/2026, 12:57:31 AM
class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> arr;
        for(int x:nums){
            arr.push_back(x*x);
        }
        sort(arr.begin(),arr.end());
        return arr;

        
    }
};