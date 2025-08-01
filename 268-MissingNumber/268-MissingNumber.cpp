// Last updated: 8/1/2025, 11:40:10 PM
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