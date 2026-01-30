// Last updated: 1/30/2026, 10:41:15 AM
1class Solution {
2public:
3int t[101];
4    int solve(vector<int>& nums,int i){
5        if(i>= nums.size()){
6            return 0;
7        }
8
9        if(t[i]!=-1){
10            return t[i];
11        }
12        int steal = nums[i]+solve(nums,i+2);
13        int skip = solve(nums,i+1);
14
15        return t[i] = max(steal,skip);
16
17
18        
19    }
20    int rob(vector<int>& nums) {
21        int n = nums.size();
22        memset(t,-1,sizeof(t));
23        return solve(nums,0);
24        
25    }
26};