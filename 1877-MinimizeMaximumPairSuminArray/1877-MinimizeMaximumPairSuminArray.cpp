// Last updated: 1/24/2026, 11:57:38 AM
1class Solution {
2public:
3    int minPairSum(vector<int>& nums) {
4        sort(nums.begin(),nums.end());
5
6        int n = nums.size();
7        int pairsum = 0;
8        int maxpair = 0;
9        for(int i=0;i<=n/2;i++){
10            pairsum = nums[i] + nums[n-i-1];
11            maxpair = max(maxpair,pairsum);
12
13
14        }
15
16        return maxpair;
17        
18    }
19};