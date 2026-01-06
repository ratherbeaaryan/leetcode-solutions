// Last updated: 1/7/2026, 2:38:11 AM
1class Solution {
2public:
3    int threeSumClosest(vector<int>& nums, int target) {
4        
5    sort(nums.begin(),nums.end());
6    int n = nums.size();
7
8int result = nums[0]+nums[1]+nums[2];
9for(int i=0;i<n-2;i++){
10    int start = i+1;
11    int end = n-1;
12    while(start<end){
13    int sum = nums[i]+nums[start]+nums[end];
14    if(abs(target-sum)<abs(target-result)){
15        result = sum;
16    }
17    if(sum==target) return target;
18    else if(sum<target) start++;
19    else{
20        end--;
21    }
22    }
23    }
24
25return result;
26    
27        
28    }
29};