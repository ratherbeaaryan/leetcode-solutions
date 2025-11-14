// Last updated: 11/14/2025, 10:04:13 AM
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int n = nums.size();
        int i = 0,cons = 0;
        int maxi=0;
        
        for(int j=0;j<n;j++){
            if(nums[i]==1 && nums[j]==1){
                cons++;
                
                maxi = max(cons,maxi);

            }
            else{
                cons = 0;
                i=j;
                i++;

            }


        }
        return maxi;
        
    }
};