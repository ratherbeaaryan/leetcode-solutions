// Last updated: 8/28/2025, 9:57:26 PM
class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        
        int count = 0;
        for(int i=0;i<n;i++){
            int sum = 0;
            for(int j=i;j<n;j++){
                sum+=nums[j];
                if(sum==k){
                count++;
            }
            }
            

        }
        return count;
        
    }
};