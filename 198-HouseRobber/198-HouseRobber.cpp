// Last updated: 1/30/2026, 12:28:46 PM
1class Solution {
2public:
3    int rob(vector<int>& nums) {
4        int n = nums.size();
5        if (n == 1) return nums[0];
6
7        vector<int> t(n + 1, 0);
8
9        // Case 1: houses [0 ... n-2]
10        for (int i = 1; i <= n - 1; i++) {
11            int steal = nums[i - 1] + (i - 2 >= 0 ? t[i - 2] : 0);
12            int skip  = t[i - 1];
13            t[i] = max(skip, steal);
14        }
15        int result1 = t[n - 1];
16
17        // Reset DP array properly
18        t.assign(n + 1, 0);
19
20        // Case 2: houses [1 ... n-1]
21        for (int i = 2; i <= n; i++) {
22            int steal = nums[i - 1] + t[i - 2];
23            int skip  = t[i - 1];
24            t[i] = max(steal, skip);
25        }
26        int result2 = t[n];
27
28        return max(result1, result2);
29    }
30};
31
32
33/**
34class Solution {
35public:
36int t[101];
37
38int solve(vector<int> &nums, int i,int end){
39    if (i >= end) return 0;
40    if(t[i]!=-1){
41        return t[i];
42    }
43
44    int steal = nums[i] + solve(nums,i+2,end);
45    int skip = solve(nums,i+1,end);
46
47    return t[i] = max(steal,skip);
48}
49    int rob(vector<int>& nums) {
50        int n = nums.size();
51        if(n==1){
52            return nums[0];
53        }
54        memset(t,-1,sizeof(t));
55
56        int a = solve(nums,0,n-1);
57        memset(t,-1,sizeof(t));
58        int b = solve(nums,1,n);
59
60
61        return max(a,b);
62
63    }
64};
65*/