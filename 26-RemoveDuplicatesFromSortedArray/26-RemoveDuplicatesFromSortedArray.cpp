// Last updated: 8/1/2025, 11:40:57 PM
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        int i = 0;
        
        for(int j=1;j<n;++j){
            if(nums[j]!=nums[i]){
                
                nums[i+1]=nums[j];
                i++;

            }
        }
        return i+1;
        
        
    }
};