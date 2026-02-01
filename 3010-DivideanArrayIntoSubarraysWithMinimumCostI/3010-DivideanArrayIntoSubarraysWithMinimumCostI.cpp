// Last updated: 2/1/2026, 7:35:09 PM
1class Solution {
2public:
3    int minimumCost(vector<int>& nums) {
4        int ans = INT_MAX;
5        int n = nums.size();
6        for(int i=1;i<n-1;i++){
7            for(int j = i+1;j<n;j++){
8                ans = min(ans,nums[0]+nums[j]+nums[i]);
9            }
10        }
11        return ans;
12
13        
14        
15    }
16};
17
18/*class Solution {
19public:
20    int minimumCost(vector<int>& nums) {
21        int n = nums.size();
22        int first = nums[0];
23
24        int a = INT_MAX;
25        int b = INT_MAX;
26        if(nums.size() == 3){
27            return nums[0]+nums[1]+nums[2];
28        }
29        for(int i=1;i<n;i++){
30            if(nums[i] < a){
31                b = a;
32                a = nums[i];
33
34            }
35            else if(nums[i]<b){
36                b = nums[i];
37            }
38            
39        }
40        return first + a + b;
41    }
42};*/