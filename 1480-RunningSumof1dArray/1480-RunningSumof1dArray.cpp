// Last updated: 2/2/2026, 1:40:49 AM
1class Solution {
2public:
3    int pivotIndex(vector<int>& nums) {
4        int n = nums.size();
5        int presum = 0;
6        int sufsum = 0;
7        for(int x: nums){
8            presum += x;
9        }
10        int leftsum =0;
11        for(int i=0;i<n;i++){
12            if(leftsum == presum - leftsum - nums[i]){
13                return i;
14            }
15
16            leftsum +=nums[i];
17        }
18        return -1;
19
20        
21    }
22};