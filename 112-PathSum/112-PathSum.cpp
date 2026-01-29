// Last updated: 1/29/2026, 10:28:33 PM
1class Solution {
2public:
3int t[46];
4int solve(int n){
5    if(n<0){
6            return 0;
7        }
8        if(n==0){
9            return 1;
10        }
11        if(t[n]!=-1){
12            return t[n];
13        }
14        int onestep = solve(n-1);
15        int twostep = solve(n-2);
16
17        return t[n] = onestep+twostep;
18}
19    int climbStairs(int n) {
20        memset(t,-1,sizeof(t));
21        return solve(n);
22        
23    }
24
25
26};
27/// DP mai ek baar firse solve krenge