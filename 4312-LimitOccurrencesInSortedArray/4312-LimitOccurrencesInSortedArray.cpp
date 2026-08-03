// Last updated: 8/4/2026, 12:54:10 AM
class Solution {
public:
    vector<int> limitOccurrences(vector<int>& nums, int k) {
        vector<int> result;
        int n = nums.size();
        int countfreq = 1; 
        if(nums.size() == 0){
            return result;
        }
        result.push_back(nums[0]);
        
        for(int i=1;i<n;i++){
            if(nums[i] == nums[i-1]){
                countfreq++;
            }
            else{
                countfreq = 1;
            }
            if(countfreq <= k){
                result.push_back(nums[i]);
                
            }
        }
        return result;
        
    }
};