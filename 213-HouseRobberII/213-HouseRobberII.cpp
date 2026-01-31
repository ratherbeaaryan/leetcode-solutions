// Last updated: 1/31/2026, 11:32:14 AM
1class Solution {
2public:
3long long t[100001][2];
4long long solve(int idx , vector<int> &nums, bool flag){
5    if (idx == nums.size()) return 0;
6    if(t[idx][flag] != -1){
7        return t[idx][flag];
8    }
9    long long skip = solve(idx+1,nums,flag);
10    long long val = nums[idx];
11    if(flag!=true){
12        val = -val;
13    }
14    
15    long long take = solve(idx+1,nums,!flag) + val;
16    return t[idx][flag] = max(take,skip);
17}
18    long long maxAlternatingSum(vector<int>& nums) {
19        long long n = nums.size();
20        memset(t,-1,sizeof(t));
21
22        return solve(0,nums,true);
23
24        
25    }
26};