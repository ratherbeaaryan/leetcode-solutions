// Last updated: 2/1/2026, 7:30:27 PM
1class Solution {
2public:
3    int minimumCost(vector<int>& nums) {
4        int n = nums.size();
5        int first = nums[0];
6
7        int a = INT_MAX;
8        int b = INT_MAX;
9        if(nums.size() == 3){
10            return nums[0]+nums[1]+nums[2];
11        }
12        for(int i=1;i<n;i++){
13            if(nums[i] < a){
14                b = a;
15                a = nums[i];
16
17            }
18            else if(nums[i]<b){
19                b = nums[i];
20            }
21            
22        }
23        return first + a + b;
24    }
25};