// Last updated: 1/20/2026, 3:31:52 PM
1class Solution {
2public:
3    int findMin(vector<int>& nums) {
4        int start = 0;
5        int n = nums.size();
6        int end = n-1;
7        int low = INT_MAX;
8        if(n==1){
9            return nums[0];
10        }
11        
12        while(start<=end){
13          int mid = start-(start-end)/2;
14          if(nums[start]<=nums[mid]){
15            low = min(nums[start],low);
16            start = mid+1;
17
18          }  
19          else{
20            low = min(low,nums[end]);
21            end = mid;
22          }
23        }
24        return low;
25        
26    }
27};