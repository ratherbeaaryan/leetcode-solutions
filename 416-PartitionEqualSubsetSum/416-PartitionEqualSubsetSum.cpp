// Last updated: 8/4/2026, 12:59:49 AM
class Solution {
public:
bool subsetsum(vector<int> nums,int k){
    int n = nums.size();
    vector<vector<bool>>t(n+1,vector<bool>(k+1));

    for(int i=0;i<=n;i++){
        for(int j=0;j<=k;j++){
            if(i==0){
                t[i][j] = false;
            }
            if(j==0){
                t[i][j] = true;
            }
        }
    }

    for(int i=1;i<=n;i++){
        for(int j=1;j<=k;j++){
            if(nums[i-1] <= j){
                t[i][j] = t[i-1][j-nums[i-1]] || t[i-1][j];
            }else{
                t[i][j] = t[i-1][j];
            }
        }
    }
return t[n][k];
}
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = 0;
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        if(sum%2 != 0){
            return false;
        }
        int k = sum/2;

        return subsetsum(nums,k);
        
    }
};