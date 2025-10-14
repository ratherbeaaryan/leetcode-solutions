// Last updated: 10/14/2025, 11:06:55 AM
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int n = nums.size();
        int i = 0,j=1;
        while(j<n){
            if(nums[i]==0 && nums[j]!=0){
                swap(nums[i],nums[j]);
                i++;
                j++;
                
            }
            else if(nums[i]==0 && nums[j]==0){
                j++;
                

            }
            else{
                i++;
                j++;
            }

        }
        
        
    }
};