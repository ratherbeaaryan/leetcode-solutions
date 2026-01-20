// Last updated: 1/20/2026, 4:04:43 PM
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
14          if(nums[mid]>nums[end]){
15            //low = min(nums[start],low);
16            start = mid+1;
17
18          }  
19          else if(nums[end]>nums[mid]){
20            //low = min(low,nums[end]);
21            end = mid;
22          }
23          else{
24            end--;
25          }
26
27          
28
29        }
30        
31        
32        return nums[start];
33        
34    }
35};