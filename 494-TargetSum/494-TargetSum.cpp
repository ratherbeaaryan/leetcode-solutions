// Last updated: 8/4/2026, 12:59:28 AM
class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
        int n = nums.size();

        int sum = 0;
        for(auto x: nums){
            sum+=x;
        }
        if(abs(target) >sum || (target+sum)%2!=0){
            return 0;
        }
        int k = (target+sum)/2;

        vector<vector<long long>>t(n+1,vector<long long>(k+1,0));
        for(int i=0;i<=n;i++){
            for(int j=0;j<=k;j++){
                if(i==0){
                    t[0][j] = false;
                }
                if(j==0){
                    t[i][0] = true;
                }
            }
        }
        for(int i=1;i<=n;i++){
            for(int j=0;j<=k;j++){
                if(nums[i-1] <=j){
                    t[i][j] = t[i-1][j-nums[i-1]] + t[i-1][j];
                }
                else{
                    t[i][j] = t[i-1][j];
                }
            }
        }

        return t[n][k];
        
    }
};