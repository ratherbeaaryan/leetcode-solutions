// Last updated: 8/4/2026, 12:58:42 AM
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
        int presum = 0;
        int sufsum = 0;
        for(int x: nums){
            presum += x;
        }
        int leftsum =0;
        for(int i=0;i<n;i++){
            if(leftsum == presum - leftsum - nums[i]){
                return i;
            }

            leftsum +=nums[i];
        }
        return -1;

        
    }
};