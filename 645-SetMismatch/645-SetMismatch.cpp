// Last updated: 1/14/2026, 11:09:25 PM
1class Solution {
2public:
3    vector<int> findDisappearedNumbers(vector<int>& nums) {
4        int n = nums.size();
5        vector<int> result;
6
7        for(int i=0;i<n;i++){
8            int idx = abs(nums[i]) - 1;
9            if(nums[idx]>0){
10                nums[idx] = -nums[idx];
11            }
12        }
13        for(int i=0;i<n;i++){
14            if(nums[i]>0){
15                result.push_back(i+1);
16
17            }
18        }
19        for(int i=0;i<result.size();i++){
20            
21        }
22
23        return result;
24        
25    }
26};