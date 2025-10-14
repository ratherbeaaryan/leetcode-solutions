// Last updated: 10/14/2025, 11:07:58 AM
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int a;
        sort(nums.begin(),nums.end());
        for(int i = 0;i<n;i++){
            if(nums[i]!=i){
                a = i;
                break;
            }
            
        }
        return a;
    }
};