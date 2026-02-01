// Last updated: 2/1/2026, 11:48:23 PM
1class Solution {
2public:
3    vector<int> runningSum(vector<int>& nums) {
4        int n = nums.size();
5        int sum = 0;
6        for(int i=0;i<n;i++){
7            sum+= nums[i];
8            nums[i] = sum;
9            
10            
11        }
12        return nums;
13        
14    }
15};