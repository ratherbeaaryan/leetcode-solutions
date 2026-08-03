// Last updated: 8/4/2026, 12:55:26 AM
class Solution {
public:
long long t[100001][2];
long long solve(int idx , vector<int> &nums, bool flag){
    if (idx == nums.size()) return 0;
    if(t[idx][flag] != -1){
        return t[idx][flag];
    }
    long long skip = solve(idx+1,nums,flag);
    long long val = nums[idx];
    if(flag!=true){
        val = -val;
    }
    
    long long take = solve(idx+1,nums,!flag) + val;
    return t[idx][flag] = max(take,skip);
}
    long long maxAlternatingSum(vector<int>& nums) {
        long long n = nums.size();
        memset(t,-1,sizeof(t));

        return solve(0,nums,true);

        
    }
};