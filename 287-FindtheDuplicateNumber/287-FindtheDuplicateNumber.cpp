// Last updated: 1/20/2026, 3:45:21 PM
1class Solution {
2public:
3    int findDuplicate(vector<int>& nums) {
4        int n = nums.size();
5        sort(nums.begin(),nums.end());
6
7        for(int i=0;i<n;i++){
8            if(nums[i]==nums[i+1]){
9                return nums[i];
10            }
11            
12        }
13        return 0;
14        
15    }
16};