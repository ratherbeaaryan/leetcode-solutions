// Last updated: 1/30/2026, 11:57:16 AM
1class Solution {
2public:
3int t[101];
4
5int solve(vector<int> &nums, int i,int end){
6    if (i >= end) return 0;
7    if(t[i]!=-1){
8        return t[i];
9    }
10    
11    int steal = nums[i] + solve(nums,i+2,end);
12    int skip = solve(nums,i+1,end);
13
14    return t[i] = max(steal,skip);
15}
16    int rob(vector<int>& nums) {
17        int n = nums.size();
18        if(n==1){
19            return nums[0];
20        }
21        memset(t,-1,sizeof(t));
22
23        int a = solve(nums,0,n-1);
24        memset(t,-1,sizeof(t));
25        int b = solve(nums,1,n);
26
27
28        return max(a,b);
29        
30    }
31};