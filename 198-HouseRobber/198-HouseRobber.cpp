// Last updated: 1/30/2026, 10:58:22 AM
1class Solution {
2public:
3//BOTTOM UP
4    int rob(vector<int>& nums) {
5        int n = nums.size();
6        
7
8        vector<int> t(n+1,0);
9        
10
11        //t[i] = max stolen money till house
12
13        t[0] = 0;
14        t[1] = nums[0];
15
16        for(int i=2;i<=n;i++){
17            int steal = nums[i-1] + t[i-2];
18            int skip = t[i-1];
19
20            t[i] = max(steal,skip);
21        }
22
23        return t[n];
24        
25    }
26};
27
28/* //TOP DOWN
29class Solution {
30public:
31int t[101];
32    int solve(vector<int>& nums,int i){
33        if(i>= nums.size()){
34            return 0;
35        }
36
37        if(t[i]!=-1){
38            return t[i];
39        }
40        int steal = nums[i]+solve(nums,i+2);
41        int skip = solve(nums,i+1);
42
43        return t[i] = max(steal,skip);
44
45
46        
47    }
48    int rob(vector<int>& nums) {
49        int n = nums.size();
50        memset(t,-1,sizeof(t));
51        return solve(nums,0);
52        
53    }
54};
55*/